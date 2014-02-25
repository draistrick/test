//
//  xyzMasterViewController.h
//  test
//
//  Created by David Raistrick on 2/19/14.
//  Copyright (c) 2014 David Raistrick. All rights reserved.
//

#import <UIKit/UIKit.h>

@class xyzDetailViewController;

@interface xyzMasterViewController : UITableViewController

@property (strong, nonatomic) xyzDetailViewController *detailViewController;

@end
