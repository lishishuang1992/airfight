//
//  FKBlast.h
//  airfight
//
//  Created by 李世爽 on 15-11-20.
//  Copyright (c) 2015年 crazyit.org. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <QuartzCore/QuartzCore.h>

@interface FKBlast : NSObject
@property (nonatomic, strong) CALayer* layer;
@property (nonatomic, assign) NSInteger imageIndex;
- (id)initWithLayer:(CALayer*)layer imageIndex:(NSInteger)imageIndex;
@end
