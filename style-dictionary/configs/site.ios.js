module.exports = {
  siteIos: {
    transformGroup: 'custom/js',
    buildPath: 'dist/json/',
    // prefix: 'cdr',
    files: [
      {
        destination: 'ios.json',
        format: 'site',
      },
    ],
  },
};
