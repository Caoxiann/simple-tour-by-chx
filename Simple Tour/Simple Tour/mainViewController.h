//
//  mainViewController.h
//  Simple Tour
//
//  Created by 陈浩贤 on 16/1/30.
//  Copyright © 2016年 陈浩贤. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "travellerInfoVC.h"
#import "purchasingDetailsVC.h"
#import "DayOrderVC.h"
#import "loginViewController.h"
#import "buttomBar.h"
@interface mainViewController : UIViewController
<UITabBarDelegate>
{
    UITabBar *tabbar;
    buttomBar *barOnButtom;
    UITabBarItem *item1;
    UITabBarItem *item2;
    UITabBarItem *item3;
    UILabel *travellerLabel;
    UIButton *logoutButton;
    travellerInfoVC *travellerInfo;
    purchasingDetailsVC *purchasingDetail;
    DayOrderVC *dayOrder;
    UIViewController *currentViewController;
    UIViewController *newViewController;

}
@property(strong, nonatomic)NSString *username;
-(void)addCons;
-(void)addConstrainsForChildviewcontroller:(UIViewController *)childViewController;
-(void)logout;
@end
