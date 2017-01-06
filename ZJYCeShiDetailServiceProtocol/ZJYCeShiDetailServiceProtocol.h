//
//  ZJYCeShiDetailServiceProtocol.h
//  ZJYCeShiDetailServiceProtocol
//
//  Created by apple on 2017/1/6.
//  Copyright © 2017年 JunFly. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol ZJYCeShiDetailServiceProtocol <NSObject>

@required;

- (UIViewController *)ceshiDetailViewControllerWithGoodsId:(NSString*)goodsId goodsName:(NSString *)goodsName;

@end
