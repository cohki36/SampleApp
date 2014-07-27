//
//  DetailViewController.h
//  SampleApp
//
//  Created by Koki Morii on 2014/07/27.
//  Copyright (c) 2014年 Koki Morii. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

