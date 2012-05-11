//
//  MVCprototypeAppController.h
//  MVCprototype
//
//  Created by Shuaiying Hou on 12-5-9.
//  Copyright Pinidea 2012年. All rights reserved.
//

@class RootViewController;

@interface AppController : NSObject <UIAccelerometerDelegate, UIAlertViewDelegate, UITextFieldDelegate,UIApplicationDelegate> {
    UIWindow *window;
    RootViewController	*viewController;
}

@end

