//
//  ShallWeAdHelper.m
//  ApplicationBuilder
//
//  Created by Jeong YunWon on 13. 3. 9..
//  Copyright (c) 2013 youknowone.org All rights reserved.
//

#import "ShallWeAD.h"
#import "ShallWeAdHelper.h"

void ShallWeAdQuickSet(NSString *key, UIViewController *viewController, UIView *view, id delegate) {
    [G_SHALLWEAD Create_ShallWeAD:key // 홈페이지 발급 받은키
                       TypeBanner:@"HTMLBanner"            // 배너타입
                          GpsInfo:NO                      // GPS 정보 설정
                      BannerWidth:@"FIT"                    // FIT, FULL 배너 넓이 설정
                             PoSX:0.f                       // X좌표
                             PoSY:0.f                       // Y좌표
                         SetAngle:degree0                  // 배너 이미지 각도
                         SetDebug:NO];                     // Debug Message
    G_SHALLWEAD.delegate = delegate;
    [view addSubview:G_SHALLWEAD.view];
}