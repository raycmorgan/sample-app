//
//  LNLEchoViewController.h
//  LNLDemo4
//
//  Created by Raymond Morgan on 5/26/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface LNLEchoViewController : UIViewController

@property (nonatomic, retain) IBOutlet UILabel *label;
@property (nonatomic, retain) IBOutlet UITextField *textField;

- (IBAction)handleButtonPress;

@end
