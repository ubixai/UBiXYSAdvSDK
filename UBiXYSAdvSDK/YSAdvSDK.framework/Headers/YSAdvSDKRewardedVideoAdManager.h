//
//  YSAdvSDKRewardedVideoAdManager.h
//  YSAdvSDK
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class YSAdvSDKRewardedVideoAdManager;
@class YSAdvSDKRewardedVideoModel;

@protocol YSAdvSDKRewardedVideoDelegate <NSObject>
@optional
- (void)ysRewardedVideoAdLoadSuccess:(YSAdvSDKRewardedVideoAdManager *)rewardedVideoAdManager;
- (void)ysRewardedVideoAdLoadFail:(NSInteger)errorCode andErrorMessage:(NSString *)errorMessage;
- (void)ysRewardedVideoAdExposedSuccess;
- (void)ysRewardedVideoAdShowFail:(NSString *)errorMessage;
- (void)ysRewardedVideoAdDidClicked;
- (void)ysRewardedVideoAdDidClickSkip;
- (void)ysRewardedVideoAdDidClose;
- (void)ysRewardedVideoAdDidEffective;
- (void)ysRewardedVideoAdFinishPlay;
@end

@interface YSAdvSDKRewardedVideoAdManager : NSObject
@property (nonatomic, weak, nullable) id<YSAdvSDKRewardedVideoDelegate> delegate;
@property (nonatomic, strong, nullable) YSAdvSDKRewardedVideoModel *rewardedVideoModel;
@property (nonatomic, assign) BOOL videoMuted;
- (double)salePrice;
- (void)loadRewardVideoAdWithPlaceType:(NSInteger)placeType;
- (void)showRewardedVideo:(UIViewController *)rootViewController;
@end

NS_ASSUME_NONNULL_END
