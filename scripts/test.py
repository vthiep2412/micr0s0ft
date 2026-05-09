import urllib.request
import urllib.error
import json
import os
import sys
import re

# IMPORTANT: After deploying to Vercel, replace this with your actual Vercel URL
VERCEL_URL = "https://your-vercel-project-name.vercel.app/api/index"
PASSWORD = "acanicheat123@"

def clean_code(text: str) -> str:
    # Extract code from markdown block if it exists
    code_blocks = re.findall(r'```(?:cpp|c\+\+|c|python)?\n(.*?)\n```', text, re.DOTALL | re.IGNORECASE)
    if code_blocks:
        code = code_blocks[0]
    else:
        # Fallback: remove just the markdown backticks
        code = re.sub(r'^```.*$', '', text, flags=re.MULTILINE)
        
    # Remove C++ single-line comments //
    code = re.sub(r'//.*', '', code)
    # Remove C++ multi-line comments /* ... */
    code = re.sub(r'/\*.*?\*/', '', code, flags=re.DOTALL)
    
    # Remove excessive empty lines
    code = re.sub(r'\n\s*\n', '\n\n', code)
    
    return code.strip()

def main():
    print("Please paste the path to the input file:")
    file_path = input("> ").strip()
    
    # Strip quotes if the user pasted from Windows "Copy as path"
    if file_path.startswith('"') and file_path.endswith('"'):
        file_path = file_path[1:-1]
        
    abs_path = os.path.abspath(file_path)
    
    if not os.path.isfile(abs_path):
        print(f"Error: File not found at {abs_path}")
        sys.exit(1)
        
    with open(abs_path, 'r', encoding='utf-8') as f:
        prompt = f.read()
        
    input_dir = os.path.dirname(abs_path)
    input_filename = os.path.basename(abs_path)
    name, ext = os.path.splitext(input_filename)
    
    default_output = f"{name}_answer.txt"
    print(f"\nEnter output filename (Press Enter to use default: {default_output}):")
    custom_name = input("> ").strip()
    
    output_filename = custom_name if custom_name else default_output
    output_path = os.path.join(input_dir, output_filename)
        
    print(f"\nRead {len(prompt)} characters. Sending to Vercel Proxy...")
    
    # Payload for our own Vercel API
    payload = {
        "prompt": prompt,
        "password": PASSWORD
    }
    
    encoded_data = json.dumps(payload).encode('utf-8')
    req = urllib.request.Request(VERCEL_URL, data=encoded_data, headers={"Content-Type": "application/json"}, method='POST')
    
    try:
        with urllib.request.urlopen(req) as response:
            response_body = response.read().decode('utf-8')
            response_json = json.loads(response_body)
            
            if "answer" in response_json:
                # Clean the response text (remove comments, conversational text, and codeblocks)
                final_output = clean_code(response_json["answer"])
            else:
                print("Error from server:", response_json)
                sys.exit(1)
                
    except urllib.error.HTTPError as e:
        print(f"HTTP Error from Vercel: {e.code} - {e.read().decode('utf-8')}")
        sys.exit(1)
    except Exception as e:
        print(f"Connection Error: {e}")
        sys.exit(1)
        
    with open(output_path, 'w', encoding='utf-8') as f:
        f.write(final_output)
        
    print(f"Answer written to: {output_path}")

if __name__ == "__main__":
    main()
