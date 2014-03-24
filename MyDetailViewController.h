//
//  MyDetailViewController.h
//  MyCoreData
//
//  Created by Sarah Esunis on 3/23/14.
//  Copyright (c) 2014 Sarah Esunis. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MyDetailViewController : UIViewController
@property (strong) NSManagedObject *contactdb;
@property (strong, nonatomic) IBOutlet UITextField *fullname;
@property (strong, nonatomic) IBOutlet UITextField *email;
@property (strong, nonatomic) IBOutlet UITextField *phone;

- (IBAction)btnSave:(id)sender;


- (IBAction)btnBack:(id)sender;

@end
