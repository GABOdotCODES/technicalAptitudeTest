const { operations } = require("./build/Release/operations");
const express = require("express");
const app = express();

const { PORT, HELP_URL } = process.env;
const { log, error } = console;

app.get("/help", (_req, res) => {
  res.writeHeader(200, { "Content-Type": "text/html" });
  res.write(`Visit <a href="${HELP_URL}">this</a> to more info!`);
  res.end();
});

app.get("/:operation/:termA/:termB", (req, res) => {
  try {
    const { params } = req;
    const { operation } = params;
    if (!(operation == "add" || operation == "subtract")) {
      throw "First term must be add or subtract";
    }
    const termA = parseFloat(params.termA);
    const termB = parseFloat(params.termB);
    if (isNaN(termA)) throw "Second term must be a Number";
    if (isNaN(termB)) throw "Third term must be a Number";
    const total = operations(operation, termA, termB);
    res.json(total);
  } catch (e) {
    error(e);
    res.json(e);
  }
});

app.listen(PORT, () => {
  log(`Server on http://localhost:${PORT}`);
});
