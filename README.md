# react-native-salesforce-chat

## Salesforce SDK Documentation

This RN native module uses Salesforce Embedded Service SDK:

- [iOS Developer Guide](https://developer.salesforce.com/docs/atlas.en-us.service_sdk_ios.meta/service_sdk_ios/servicesdk_ios_dev_guide.htm)
- [Android Developer Guide](https://developer.salesforce.com/docs/atlas.en-us.service_sdk_android.meta/service_sdk_android/servicesdk_android_dev_guide.htm)

## Getting started

```
$ npm install react-native-salesforce-chat --save

// or using yarn:

$ yarn add react-native-salesforce-chat
```

For React Native version > 0.60, use autolinking:

```
$ cd ios && pod install
```

### Mostly automatic installation (for React Native version < 0.60)

`$ react-native link react-native-salesforce-chat`

### Manual installation

#### iOS

1. In XCode, in the project navigator, right click `Libraries` ➜ `Add Files to [your project's name]`
2. Go to `node_modules` ➜ `react-native-salesforce-chat` and add `RNSalesforceChat.xcodeproj`
3. In XCode, in the project navigator, select your project. Add `libRNSalesforceChat.a` to your project's `Build Phases` ➜ `Link Binary With Libraries`
4. Run your project (`Cmd+R`)<

#### Android

1. Open up `android/app/src/main/java/[...]/MainActivity.java`
  - Add `import com.reactlibrary.RNSalesforceChatPackage;` to the imports at the top of the file
  - Add `new RNSalesforceChatPackage()` to the list returned by the `getPackages()` method
2. Append the following lines to `android/settings.gradle`:
  	```
  	include ':react-native-salesforce-chat'
  	project(':react-native-salesforce-chat').projectDir = new File(rootProject.projectDir, 	'../node_modules/react-native-salesforce-chat/android')
  	```
3. Insert the following lines inside the dependencies block in `android/app/build.gradle`:
  	```
      compile project(':react-native-salesforce-chat')
  	```

## Usage
```javascript
import RNSalesforceChat from 'react-native-salesforce-chat';
```
