//
//  ViewController.h
//  address
//
//  Created by Feby Varghese on 7/8/12.
//  Copyright (c) 2012 febycv. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "secondpage.h"

@interface ViewController : UIViewController
{
    IBOutlet UITextField *nametext;
    IBOutlet UITextField *phonetext;
    IBOutlet UITextView *addresstext;
}

@property(nonatomic,retain)IBOutlet UITextField *nametext;

@property(nonatomic,retain)IBOutlet UITextField *phonetext;

@property(nonatomic,retain)IBOutlet UITextView *addresstext;

-(IBAction)submit:(id)sender;

-(IBAction)autohide:(id)sender;

@end
