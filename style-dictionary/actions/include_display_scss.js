const fs = require('fs-extra');
const path = require('path');

module.exports = (StyleDictionary) => {
  // concat all files in buildPath to a given filename
  StyleDictionary.registerAction({
    name: 'include_display_scss',
    do(dictionary, config) {
      const scss = path.join(__dirname, '../utilities/display.scss');
      const outputDir = path.join(__dirname, '../../', config.buildPath, 'display.scss');
      fs.copyFileSync(scss, outputDir);
    },
    undo(dictionary, config) {
      fs.removeSync(path.join(__dirname, '../../', config.buildPath));
    },
  });
};
