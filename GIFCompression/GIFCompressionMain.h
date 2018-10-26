//
//  GIFCompressionMain.h
//  GIFCompressionMain
//
//  Created by xiaoyu on 2017/12/18.
//  Copyright © 2017年 lenovo. All rights reserved.
//

#import <Foundation/Foundation.h>

//! Project version number for GIFCompressionFramework.
FOUNDATION_EXPORT double GIFCompressionFrameworkVersionNumber;

//! Project version string for GIFCompressionFramework.
FOUNDATION_EXPORT const unsigned char GIFCompressionFrameworkVersionString[];

typedef NS_ENUM(NSUInteger, GIFCompressionResult) {
    GIFCompressionResultOK                      = 0,//Без ошибок
    GIFCompressionResultErrorNotInputNameError  = 1,//inputpath Ошибка форматирования (nil или null）
    GIFCompressionResultErrorNotOutputNameError = 2,//outputpath Ошибка форматирования (nil или null）
    GIFCompressionResultErrorNotFoundInput      = 3,//Ничего не найдено inputpath
    GIFCompressionResultErrorInputNotGIF        = 4,//inputpath Файл не является gif-файлом
    GIFCompressionResultErrorCompress           = 5,//Проблемы со сжатием
};

@interface GIFCompression : NSObject

+ (GIFCompressionResult)compressGIFWithLossyLevel:(int)lossylevel inputPath:(NSString *)inputPath outputPath:(NSString *)outputPath;

@end
