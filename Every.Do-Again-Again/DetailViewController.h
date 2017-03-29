//
//  DetailViewController.h
//  Every.Do-Again-Again
//
//  Created by David Guichon on 2017-03-29.
//  Copyright © 2017 David Guichon. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Every_Do_Again_Again+CoreDataModel.h"

@interface DetailViewController : UIViewController

@property (strong, nonatomic) Event *detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

