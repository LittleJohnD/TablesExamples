//
//  DetailViewController.h
//  TableExamples
//
//  Created by John Dyer on 06/01/2015.
//  Copyright (c) 2015 John Dyer. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

