//
//  OEMonitorService.h
//  WWFoundation
//
//  Created by William Wu on 2/1/14.
//  Copyright (c) 2014 WW. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OEMonitorInfo.h"

@interface OEMonitorService : NSObject

- (NSMutableDictionary *)loadAllMonitors;

- (OEMonitorInfo *) monitorAction:(NSURL *)actionURL lastUpdateTime:(NSDate *)lastUpdateTime;

@end
