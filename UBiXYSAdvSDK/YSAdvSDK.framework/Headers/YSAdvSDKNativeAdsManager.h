//
//  YSAdvSDKNativeAdsManager.h
//  YSAdvSDK
//
//  Created by yanchao on 2025/5/28.
//
//  信息流广告管理器（API 自渲染）
//
//  典型使用流程：
//    1. initWithPlacementId: 初始化
//    2. 设置 delegate
//    3. 调用 loadAdData 发起请求
//    4. 在 nativeAdsManagerSuccessToLoad:nativeAds: 回调中拿到 YSAdvSDKNativeAd 数组
//    5. 用 nativeAd.data 填充自定义 Cell，调用 registerContainer:withClickableViews: 绑定

#import <UIKit/UIKit.h>
#import "YSAdvSDKNativeAd.h"

NS_ASSUME_NONNULL_BEGIN

@class YSAdvSDKNativeAdsManager;

@protocol YSAdvSDKNativeAdsManagerDelegate <NSObject>

@optional

/**
 广告加载成功
 @param adsManager  管理器实例
 @param nativeAdDataArray  广告数组，每条为 YSAdvSDKNativeAd
 */
- (void)nativeAdsManagerSuccessToLoad:(YSAdvSDKNativeAdsManager *)adsManager
                            nativeAds:(nullable NSArray<YSAdvSDKNativeAd *> *)nativeAdDataArray;

/**
 广告加载失败
 */
- (void)nativeAdsManager:(YSAdvSDKNativeAdsManager *)adsManager
        didFailWithError:(nullable NSError *)error;

@end


@interface YSAdvSDKNativeAdsManager : NSObject

/// 代理
@property (nonatomic, weak) id<YSAdvSDKNativeAdsManagerDelegate> delegate;

/// 媒体附加信息（含 requestId 等）
@property (nonatomic, readonly) NSDictionary *mediaExtraInfo;

/// 竞价价格
- (double)salePrice;

#pragma mark - 初始化

/**
 初始化信息流广告管理器
 @param placementId 广告位 ID
 */
- (instancetype)initWithPlacementId:(NSInteger)placementId;

#pragma mark - 加载

/// 加载信息流广告
- (void)loadAdData;

@end

NS_ASSUME_NONNULL_END
