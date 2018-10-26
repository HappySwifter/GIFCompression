# GIFCompress 
(original name GIFLossyCompress: https://github.com/levinXiao/GIFLossyCompress)


# Pod Installation

```
    pod 'GIFCompression'
```

# How To Use:

# SWIFT
```
import GIFCompression

    //MARK: - Compress GIF file
    
    func compressGIF(from fileInput:String, to fileOutput:String) -> URL? {
        let re = GIFCompression.compressGIF(withLossyLevel: 20, inputPath: fileInput, outputPath: fileOutput)
        if re != .OK {
            print("Error #\(re.rawValue)")
            return nil
        } else {
            print("Success compress")
        }
        return URL(fileURLWithPath:fileOutput)
    }
```

# OBJECTIVE-C
```
#import <GIFCompression/GIFCompression.h>


NSString *input = [[NSBundle mainBundle] pathForResource:@"meme" ofType:@"gif"];

NSString *dirtail = [NSString stringWithFormat:@"%@",@"/Documents/Images"];
NSString *dirfull = [NSHomeDirectory() stringByAppendingPathComponent:dirtail];
if (![[NSFileManager defaultManager] fileExistsAtPath:dirfull]) {
[[NSFileManager defaultManager] createDirectoryAtPath:dirfull withIntermediateDirectories:YES attributes:nil error:nil];
}

NSString *outpath = [[dirfull stringByAppendingPathComponent:@"meme2"] stringByAppendingPathExtension:@"gif"];

NSLog(@"out path :%@",outpath);

GIFCompressionResult re = [GIFCompression compressGIFWithLossyLevel:80 inputPath:input outputPath:outpath];
NSLog(@"end result : %d",(long)re);

```
