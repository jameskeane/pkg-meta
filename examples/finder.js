const { findScript } = require('../build/Release/find_func');

const find_me = require('./other_file');

console.log(findScript(find_me));
console.log(findScript(find_me()));
