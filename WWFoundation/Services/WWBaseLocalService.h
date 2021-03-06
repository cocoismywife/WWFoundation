//
//  WWBaseLocalService.h
//  RipplingApp
//
//  Created by William Wu on 7/29/14.
//  Copyright (c) 2014 WW. All rights reserved.
//

#import "WWBaseService.h"
#import "WWBaseInfo.h"

@protocol WWBaseLocalServiceDelegate <NSObject>

@optional
- (NSArray *)loadAll;
- (NSArray *)loadAllByPage:(NSNumber *)pageNumber;
- (id<WWItemDataDelegate>)load:(id<WWItemDataDelegate>)item;

- (void)save:(id<WWItemDataDelegate>)item;
- (void)save:(id<WWItemDataDelegate>)item dataStore:(IBCoreDataStore *)dataStore;
- (void)saveAll:(NSArray *)objects;
- (void)saveAllByPage:(NSArray *)objects pageNumber:(NSNumber *)pageNumber;

- (void)remove:(id<WWItemDataDelegate>)item;
- (void)remove:(id<WWItemDataDelegate>)item dataStore:(IBCoreDataStore *)dataStore;
- (void)removeAll:(NSArray *)objects;

@end

@interface WWBaseLocalService : WWBaseService <WWBaseLocalServiceDelegate>

@end
