Pod::Spec.new do |s|
  s.name         = "GIFCompression"
  s.version      = "0.1.0"
  s.summary      = "An open source iOS framework for compress GIF images."
  s.description  = <<-DESC
        This is an open source iOS framework for compress GIF images.
                   DESC
  s.homepage     = "https://github.com/twox/GIFCompression"
  s.license      = "MIT"
  s.authors      = { "Valery Domozhirov" => "d_valery@mail.ru", "levinXiao"=> "772381545@qq.com" }
  s.platform     = :ios, "8.0"
  s.source       = { :git => "https://github.com/twox/GIFCompression.git", :tag => "#{s.version}" }
  s.source_files  = [
    "GIFCompression/*.{h,m,modulemap}",
    "GIFCompression/lib-gif-compression/include/*.h",
    "GIFCompression/lib-gif-compression/src/*{h,c}"
  ]
  s.public_header_files = [
    "GIFCompression/*.h",
    "GIFCompression/lib-gif-compression/include/*.h"
  ]
  s.xcconfig = { 'CLANG_MODULES_AUTOLINK' => 'YES', "EXCLUDED_SOURCE_FILE_NAMES" => "GIFCompression/lib-gif-compression/src/opttemplate.c" }

end
