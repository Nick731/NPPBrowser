//
//  ViewController.h
//  NPPBrowser
//
//  Created by Nick Peters on 2/16/15.
//  Copyright (c) 2015 Nick Peters. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<NSURLConnectionDelegate> 
{
    NSMutableData *responseData;
}

@end

