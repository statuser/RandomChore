//
//  DetailViewController.h
//  RandomChore
//
//  Created by John Howell on 12/6/13.
//  Copyright (c) 2013 John Howell. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
