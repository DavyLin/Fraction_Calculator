//
//  Calculator.h
//  Fraction_Calculator
//
//  Created by javalinjx on 13-12-16.
//  Copyright (c) 2013年 javalinjx. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Fraction.h"

@interface Calculator : NSObject

@property (strong,nonatomic) Fraction *operand1,*operand2,*accumulator;

-(Fraction *) performOperation: (char) op;
-(void) clear;

@end
