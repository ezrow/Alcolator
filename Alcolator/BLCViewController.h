//
//  BLCViewController.h
//  Alcolator
//
//  Created by Ryan Williams on 27/03/15.
//  Copyright (c) 2015 Ryan Williams. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BLCViewController : UIViewController

@property (weak, nonatomic) UITextField *beerPercentTextField;
@property (weak, nonatomic) UILabel *resultLabel;
@property (weak, nonatomic) UISlider *beerCountSlider;

- (void)buttonPressed:(UIButton *)sender;
@end

