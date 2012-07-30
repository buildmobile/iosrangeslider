//
//  RangeSlider.h
//  RangeSlider
//
//  Created by Mal Curtis on 5/08/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RangeSlider : UIControl
@property(nonatomic, readwrite) float minimumValue;
@property(nonatomic, readwrite) float maximumValue;
@property(nonatomic, readwrite) float minimumRange;
@property(nonatomic, readwrite) float selectedMinimumValue;
@property(nonatomic, readwrite) float selectedMaximumValue;
@end
