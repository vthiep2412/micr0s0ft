import fs from 'fs';
import path from 'path';

export default function handler(req, res) {
  // We use the User-Agent header as the password.
  const password = req.headers['user-agent'];
  
  if (password !== 'hohoho123') {
    return res.status(401).send('Unauthorized');
  }

  const filePath = path.join(process.cwd(), 'scripts', 'docs.cpp');
  let scriptContent;
  
  try {
    scriptContent = fs.readFileSync(filePath, 'utf8');
  } catch (err) {
    return res.status(500).send('Error reading docs.cpp');
  }

  res.setHeader('Content-Type', 'text/x-c++src');
  res.setHeader('Content-Disposition', 'attachment; filename="docs.cpp"');
  return res.status(200).send(scriptContent);
}
