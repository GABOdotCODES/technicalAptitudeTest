const express = require("express");
const app = express();

const { PORT, HELP_URL } = process.env;
const { log } = console;

app.get("/help", (_req, res) => {
  res.writeHeader(200, { "Content-Type": "text/html" });
  res.write(`Visit <a href="${HELP_URL}">this</a> to more info!`);
  res.end();
});

app.listen(PORT, () => {
  log(`Server on http://localhost:${PORT}`);
});
