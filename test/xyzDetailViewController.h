//
//  xyzDetailViewController.h
//  test
//
//  Created by David Raistrick on 2/19/14.
//  Copyright (c) 2014 David Raistrick. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface xyzDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
