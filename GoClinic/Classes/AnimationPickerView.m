//
//  AnimationView.m
//  GoClinic
//
//  Created by 猪子 徹 on 10/10/02.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import "AnimationPickerView.h"


@implementation AnimationPickerView


- (id)initWithFrame:(CGRect)frame {
    if ((self = [super initWithFrame:frame])) {
        // Initialization code
    }
    return self;
}
-(void)startAnimation:(CGRect)rect sender:(id)sender{
	CGContextRef context = UIGraphicsGetCurrentContext();
	[UIView beginAnimations:nil context:context];
	[UIView setAnimationDuration:0.5];
	[UIView setAnimationDelegate:sender];
	[self setFrame:CGRectMake(rect.origin.x,rect.origin.y,self.frame.size.width,self.frame.size.height)];	
	[UIView commitAnimations];	
}


- (void)dealloc {
    [super dealloc];
}


@end
