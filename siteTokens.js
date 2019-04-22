const _ = require('lodash');
const fs = require('fs-extra');
const rawGlobal = require('./dist/json/global.json');
const rawWeb = require('./dist/json/web.json');
const rawAndroid = require('./dist/json/android.json');
const rawIos = require('./dist/json/ios.json');

// get keys for each category per platform
const globalKeyArr = Object.keys(rawGlobal);
const webKeyArr = Object.keys(rawWeb);
const androidKeyArr = Object.keys(rawAndroid);
const iosKeyArr = Object.keys(rawIos);

// diffing function
function hasSameName(arrVal, otherVal) {
  const kebab1 = _.kebabCase(arrVal.name);
  const kebab2 = _.kebabCase(otherVal.name);
  return _.isEqual(kebab1, kebab2);
};

// get unique list of all keys
const allKeys = _.union(globalKeyArr, webKeyArr, androidKeyArr, iosKeyArr);

const dataByPlatform = {
  global: {},
  web: {},
  android: {},
  ios: {},
};

allKeys.forEach((key) => {
  // keep global tokens
  dataByPlatform.global[key] = rawGlobal[key];

  // find unique tokens by platform
  dataByPlatform.web[key] = _.differenceWith(rawWeb[key], rawGlobal[key], hasSameName);
  dataByPlatform.android[key] = _.differenceWith(rawAndroid[key], rawGlobal[key], hasSameName);
  dataByPlatform.ios[key] = _.differenceWith(rawIos[key], rawGlobal[key], hasSameName);
});

fs.outputFileSync('./dist/json/platform-tokens.json', JSON.stringify(dataByPlatform, null, 2));