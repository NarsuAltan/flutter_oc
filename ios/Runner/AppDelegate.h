#import <Flutter/Flutter.h>
#import <UIKit/UIKit.h>

#define DEMO_VERSION 2.0.0




@interface AppDelegate : FlutterAppDelegate

@property (strong, nonatomic) UIWindow *window;

/// 是否允许旋转
@property (assign, nonatomic) BOOL allow;

@end
