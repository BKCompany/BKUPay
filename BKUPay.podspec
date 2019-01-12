Pod::Spec.new do |spec|

  spec.name         = "BKUPay"
  spec.version      = "1.0.0"
  spec.summary      = "使用方便SDK"

  spec.description  = <<-DESC
 用SDK来调用UPayAPP进行支付操作
                   DESC
  spec.homepage     = "https://github.com/BKCompany/BKUPay"

  spec.license      = "MIT"

  spec.author       = { "BKCompany" => "1957822705@qq.com"}
  # spec.social_media_url   = "https://twitter.com/"


  spec.platform     = :ios
  spec.platform     = :ios, "8.0"

  spec.source       = { :git => "https://github.com/BKCompany/BKUPay.git", :tag => "#{spec.version}" }

  spec.source_files  = "BKUPaySDK.framework/Headers/.{h}"

  spec.frameworks  = "UIKit"

  spec.requires_arc = true


end
