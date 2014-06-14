/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSFileManagerDelegate.h"

@class NSString, NSTimer;

@interface TemporaryItemManager : NSObject <NSFileManagerDelegate>
{
    NSString *_path;
    NSTimer *_timer;
}

+ (id)temporaryItemManagerWithRelativePath:(id)arg1 cleanupInterval:(double)arg2;
+ (void)cleanupAllItems;
- (BOOL)fileManager:(id)arg1 shouldProceedAfterError:(id)arg2 removingItemAtURL:(id)arg3;
- (BOOL)fileManager:(id)arg1 shouldProceedAfterError:(id)arg2 removingItemAtPath:(id)arg3;
- (void)cleanUpDirectory;
- (void)setExpirationDate:(id)arg1;
- (void)_setUpTimer:(id)arg1;
- (id)expirationDate;
- (id)path;
- (void)dealloc;

@end

