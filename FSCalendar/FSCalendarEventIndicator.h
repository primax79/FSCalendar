//
//  FSCalendarEventView.h
//  FSCalendar
//
//  Created by dingwenchao on 2/3/16.
//  Copyright © 2016 wenchaoios. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FSCalendarEventIndicator : UIView

@property (assign, nonatomic) NSInteger numberOfEvents;
@property (strong, nonatomic) id color;
@property (assign, nonatomic) BOOL needsAdjustingViewFrame;

@property (strong, nonatomic) NSMutableArray *eventLayers;
@property (assign, nonatomic) BOOL needsInvalidatingColor;


@end
