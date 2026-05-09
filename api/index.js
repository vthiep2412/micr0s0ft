import { GoogleGenAI } from "@google/genai";

export default async function handler(req, res) {
  // CORS headers if needed
  if (req.method !== 'POST') {
    return res.status(405).json({ error: 'Method Not Allowed' });
  }

  const { prompt, password } = req.body;
  
  // The secret password the python script must provide
  const SECRET_PASS = "acanicheat123!";

  if (password !== SECRET_PASS) {
    return res.status(401).json({ error: 'Unauthorized Access: Invalid Password' });
  }

  if (!prompt) {
    return res.status(400).json({ error: 'No prompt provided' });
  }

  // Your provided API keys
  const KEYS_STRING = "AIzaSyClRF2QhXkgwKbl1ww5eRc2W-GkadMJNyY;AIzaSyA8bmmchmyG_rhFon7cfWhcYQtf2Su6ZNg;AIzaSyAxSmhVhy6MDIGXEbOI_yYuzxYyZvpYhG4;AIzaSyCdAZ_q6McQ_91OYpNQTQA7t2zki4L8cHs;AIzaSyCvG-yR4j0yI0sDko_gI_xqfyFxmZxYrKg;AIzaSyCHzfq3QOqbIGVOPf7pUCUzpIIVIWvByek";
  const KEYS = KEYS_STRING.split(";");

  // The system prompt rules
  const SYSTEM_PROMPT = `### C++ Coding Standards & Template

**1. Logic & Formatting**
* **Naming:** Use camelCase or PascalCase.
* **Braces:** Use K&R style (same-line opening braces).
* **Single-line If:** Omit brackets for single-line \`if\` statements. If the line becomes too long, break it into two lines without adding brackets.
* **Comments:** Keep internal comments to a minimum (liminal usage).

**2. I/O Operations**
* **File Handling:** Use \`freopen\` only inside \`main()\`. Include the problem name in the filename.
* **Performance:** Use \`\\n\` instead of \`endl\`. 
* **Sync:** Use \`ios_base::sync_with_stdio(0); cin.tie(0);\`.
* **Restrictions:** Do not use \`cout.tie(0)\`. Do not use \`if (!(cin >> )) break;\` as it is considered unnecessary.

**3. Standard Template**
\`\`\`cpp
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    // freopen("PROBLEMNAMEINCAP.INP","r",stdin);
    // freopen("PROBLEMNAMEINCAP.INP","w",stdout);
    ll n;
    
    return 0;
}
\`\`\`

**4. Output Caution**
* You must always output code, if the user not requesting code ONLY respond with \`// No code\`
* You must evalute the problem and understanding the key concept then make the best out of best code for that.`;

  let responseText = null;

  // Loop through API keys on the server side using the official SDK
  for (let i = 0; i < KEYS.length; i++) {
    const key = KEYS[i];
    try {
      // Initialize the Google Gen AI client with the current key
      const ai = new GoogleGenAI({ apiKey: key });

      // Call the API using the official SDK wrapper
      const response = await ai.models.generateContent({
        model: 'gemini-3-flash-preview',
        contents: prompt,
        config: {
          systemInstruction: SYSTEM_PROMPT,
          tools: [{ googleSearch: {} }]
        }
      });

      if (response && response.text) {
          responseText = response.text;
          break; // Success, stop trying keys
      } else {
          throw new Error('Unexpected empty response format');
      }
    } catch (e) {
      console.error(`Key ${i+1} failed:`, e.message || e);
    }
  }

  if (!responseText) {
    return res.status(500).json({ error: "All API keys failed or rate limit exceeded." });
  }

  // Return the final answer to the python script
  return res.status(200).json({ answer: responseText });
}
