//
//  FKBlast.m
//  airfight
//
//  Created by 李世爽 on 15-11-20.
//  Copyright (c) 2015年 crazyit.org. All rights reserved.
//

#import "FKBlast.h"

@implementation FKBlast
- (id)initWithLayer:(CALayer*)layer imageIndex:(NSInteger)imageIndex
{
    self = [super init];
    if (self) {
        _layer = layer;
		_imageIndex = imageIndex;
    }
    return self;
}
@end
