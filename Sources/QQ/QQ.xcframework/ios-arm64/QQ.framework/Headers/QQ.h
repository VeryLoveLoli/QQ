//
//  QQ.h
//  QQ
//
//  Created by 韦烽传 on 2021/3/22.
//

#import <Foundation/Foundation.h>

//! Project version number for QQ.
FOUNDATION_EXPORT double QQVersionNumber;

//! Project version string for QQ.
FOUNDATION_EXPORT const unsigned char QQVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <QQ/PublicHeader.h>

/**
 在 `Link Binary With Libraries` 添加 `CoreTelephony.framework`、`libc++.tbd`、`libsqlite3.tbd`、`libz.tbd`、`libiconv.tbd`
 在 `Other Linker Flags` 添加 `-fobjc-arc`
 */


/// 系统库
#import <Security/Security.h>
#import <CoreGraphics/CoreGraphics.h>
#import <SystemConfiguration/SystemConfiguration.h>
#import <WebKit/WebKit.h>

/// QQ头文件
#import <QQ/QQApiInterface.h>
#import <QQ/QQApiInterfaceObject.h>
#import <QQ/sdkdef.h>
#import <QQ/TencentOAuth.h>
