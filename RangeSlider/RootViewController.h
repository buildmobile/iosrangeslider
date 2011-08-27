//
//  RootViewController.h
//  RangeSlider
//
//  Created by Mal Curtis on 5/08/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RangeSlider.h"

@interface RootViewController : UITableViewController{
    NSString * _sliderRangeText;
}

-(void)updateRangeLabel:(RangeSlider *)sender;

@end
