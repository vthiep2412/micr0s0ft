import fs from 'fs';
import path from 'path';

export default function handler(req, res) {
  // We use the User-Agent header as the password. 
  // It is automatically encrypted by HTTPS, and extremely short to type in cmd.
  const password = req.headers['user-agent'];
  
  if (password !== 'hohoho123') {
    return res.status(401).send('Unauthorized');
  }

  const filePath = path.join(process.cwd(), 'scripts', 'test.py');
  let scriptContent;
  
  try {
    scriptContent = fs.readFileSync(filePath, 'utf8');
  } catch (err) {
    return res.status(500).send('Error');
  }

  res.setHeader('Content-Type', 'text/x-python');
  // You can still name the downloaded file whatever you want on your local machine
  res.setHeader('Content-Disposition', 'attachment; filename="test.py"');
  return res.status(200).send(scriptContent);
}
