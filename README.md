pkg-meta
===

A native extension for node.js that enables the lookup of the script path
where a given function was defined.

Prior to Node.js version 9, this was possible using the `Debug.findScript`
function; but that has since been removed.

Installation
---
`npm install pkg-meta`

Usage
---
```javascript
const { findScript } = require('pkg-meta');

function find_me() {}

console.log(findScript(find_me));
```
