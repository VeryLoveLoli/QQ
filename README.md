# QQ

QQ 3.5.3.62 SDK XCFramework SwiftPackage

### bundle

`TencentOpenApi_IOS_Bundle.bundle` 直接添加到主项目，放在 `SwiftPackage` 会包含在默认的 `bundle` 下

### 工程引用
在 `Link Binary With Libraries` 添加 `CoreTelephony.framework`、`libc++.tbd`、`libsqlite3.tbd`、`libz.tbd`、`libiconv.tbd`
在 `Other Linker Flags` 添加 `-fobjc-arc`

### SwiftPackage 引用

```swift
.target(
    name: "Name",
    dependencies: ["WeChat"],
    linkerSettings: [.linkedLibrary("c++"), .linkedLibrary("z"), .linkedLibrary("iconv"), .linkedLibrary("sqlite3"), .linkedFramework("CoreTelephony")]),
```
