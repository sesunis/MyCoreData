//
//  MyContactsViewController.h
//  MyCoreData
//
//  Created by Sarah Esunis on 3/23/14.
//  Copyright (c) 2014 Sarah Esunis. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MyDetailViewController.h"
#import "MyCoreDataAppDelegate.h"
@interface MyContactsViewController : UITableViewController
@property (strong) NSMutableArray *contactarray;
- (IBAction)btnFind:(id)sender;

@end
