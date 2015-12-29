//
//  ViewController.h
//  Alcolator
//
//  Created by Randall Kanna on 12/28/15.
//  Copyright (c) 2015 Randall Kanna. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *beerPercentTextField;
@property (weak, nonatomic) IBOutlet UILabel *resultLabel;
@property (weak, nonatomic) IBOutlet UISlider *beerCountSlider;

-(void)buttonPressed:(UIButton *)sender;

@end

