import fs from 'fs';
import path from 'path';

export default function handler(req, res) {
  // Check password from HTTP headers (Headers are encrypted by HTTPS)
  const password = req.headers['x-secret-key'];
  
  if (password !== 'hohoho123') {
    return res.status(401).send('Unauthorized: Invalid Password');
  }

  // Load the python script from the scripts directory
  const filePath = path.join(process.cwd(), 'scripts', 'test.py');
  let scriptContent;
  
  try {
    scriptContent = fs.readFileSync(filePath, 'utf8');
  } catch (err) {
    console.error("File read error:", err);
    return res.status(500).send('Error reading script file from server.');
  }

  // Serve the file as a download
  res.setHeader('Content-Type', 'text/x-python');
  res.setHeader('Content-Disposition', 'attachment; filename="test.py"');
  return res.status(200).send(scriptContent);
}
