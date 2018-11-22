const pkg_meta = require('bindings')('pkg_meta');

module.exports = {
  findScript: pkg_meta.findScript
};
