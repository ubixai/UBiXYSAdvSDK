Pod::Spec.new do |s|
  s.name             = 'UBiXYSAdvSDK'
  s.version          = '5.1.0'
  s.summary          = 'YSAdvSDK (YingShi/萤石) SDK for iOS'
  s.homepage         = 'https://www.ubixai.com/product/md'
  # s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'zhugq' => 'guoqiang.zhu@ubixai.com' }
  s.source           = { :git => 'https://github.com/ubixai/UBiXYSAdvSDK.git', :tag => s.version.to_s }
  s.ios.deployment_target = '13.0'

  # s.static_framework = true
  s.vendored_frameworks = 'UBiXYSAdvSDK/YSAdvSDK.framework'
  s.resource = 'UBiXYSAdvSDK/YSAdvSDK.bundle'



end
