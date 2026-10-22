# UBiXYSAdvSDK

萤石（YingShi）广告 SDK `YSAdvSDK` 的 UBiX 托管封装，用于通过 CocoaPods 集成到 UBiX 聚合广告 SDK（MAX）。

## 内容

- `UBiXYSAdvSDK/YSAdvSDK.framework` —— 萤石广告 SDK 动态 framework（v5.1.0）
- `UBiXYSAdvSDK/YSAdvSDK.bundle` —— 资源包（关闭/音量/摇一摇等图标与 GIF）

## 使用

在宿主工程的 Podfile 中引入（由 UBiX 私有源或 git tag 提供）：

```ruby
pod 'UBiXYSAdvSDK', '5.1.0'
```

SDK 内部形态由 `YSAdvSDKManager` 初始化（需先 `setAdvSDKPackageType:andAreaId:` 再 `setMediaID:`），
聚合层通过 `UBiddingYingShiAdapter` 对接，详见 MAX 仓库中的 `CustomAdnAdapter/UBiddingYingShiAdapter`。

## 版本

与 `YSAdvSDK.framework` 的 `CFBundleShortVersionString` 保持一致（当前 5.1.0）。
