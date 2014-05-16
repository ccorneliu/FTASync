Pod::Spec.new do |s|
  s.name         = "FTASync-Modern"
  s.version      = "0.0.1"
  s.summary      = "Modern version of the Parse synchronization engine."
  s.homepage     = "https://github.com/ccorneliu/FTASync"
  s.license      = "MIT"
  s.author       = { "Corneliu Chitanu" => "info@chitanu.com" }
  s.source       = { :git => "https://github.com/ccorneliu/FTASync.git", :tag => "0.0.1" }
  s.ios.deployment_target = '5.0'
  s.osx.deployment_target = '10.7'
  s.source_files = 'Source/.'
  s.requires_arc = true
  s.dependency 'MagicalRecord', '~> 2.2'
  s.dependency 'NPReachability', '~> 0.2'
  s.dependency 'Parse', '~> 1.2'
end
