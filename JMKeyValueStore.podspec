Pod::Spec.new do |s|
  s.name         = "JMKeyValueStore"
  s.version      = "0.1.0"
  s.summary      = "A simple Key-Value storage tool, using Sqlite as backend."
  s.homepage     = "https://github.com/xserver/JMKeyValueStore"
  s.license      = "MIT"
  s.author       = { "xserver" => "xqlday@163.com" }
  s.platform     = :ios
  s.source       = { :git => "https://github.com/xserver/JMKeyValueStore.git", :tag => "0.1.0" }
  s.source_files = "JMKeyValueStore/JMKeyValueStore.{h,m}"
  s.requires_arc = true
  s.dependency   "FMDB", "~> 2.0"
end
