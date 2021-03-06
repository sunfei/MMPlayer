//
//  MMPlayerManager.h
//  MMPlayer
//
//  Created by sunfei on 2019/4/17.
//

#import <Foundation/Foundation.h>

@class MMPlayer;
@class MMPlayerPreloader;

#define __MMPlayerLogDebug__(fmt, ...)        __MDLogDebugTag(KMMPlayerTag, fmt, ##__VA_ARGS__)

@class MMPlayerConfiguratinonModel;

NS_ASSUME_NONNULL_BEGIN

extern NSString * const KMMPlayerTag;

@interface MMPlayerManager : NSObject

- (instancetype)init NS_UNAVAILABLE;

+ (void)initSDKWithAppId:(NSString *)appId;

+ (void)fetchConfig;

+ (void)configUserAgent:(NSString *)userAgent;
+ (NSString *)userAgent;

+ (void)configCachePath:(NSString *)cachePath;
+ (NSString *)cachePath;

+ (void)configCacheSpaceLimit:(long)size;
+ (long)cacheSpaceLimit;

+ (void)setUserId:(NSString *)userId;
+ (NSString *)userId;

+ (void)clearAllCache;

+ (NSString *)appId;

+ (NSString *)version;
+ (NSString *)buildVersion;

+ (MMPlayerConfiguratinonModel *)playerConfiguration;

@end

@interface MMPlayerManager (MMPlayerLogger)

+ (void)openDebugLog:(BOOL)console dir:(NSString * _Nullable)dir;

+ (void)openLogAnalyze:(BOOL)toggle;

@end

NS_ASSUME_NONNULL_END
