/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "AccountInfoTabOwner.h"

@class MFSizeEngine, NSProgressIndicator, NSTableView, NSTextField, NSTimer, NSView;

@interface Quota : NSObject <AccountInfoTabOwner>
{
    NSTableView *_quotaTable;
    NSTextField *_usageField;
    NSTimer *_statusTimer;
    NSProgressIndicator *_progressIndicator;
    NSTextField *_progressField;
    NSView *_view;
    MFSizeEngine *_sizeEngine;
    id _compareUsingDescriptors;
}

+ (id)quotaForMailAccount:(id)arg1;
@property(readonly, nonatomic) id compareUsingDescriptors; // @synthesize compareUsingDescriptors=_compareUsingDescriptors;
@property(retain, nonatomic) MFSizeEngine *sizeEngine; // @synthesize sizeEngine=_sizeEngine;
@property(retain, nonatomic) NSView *view; // @synthesize view=_view;
- (void)accountInfoWillShowView:(id)arg1;
- (void)accountInfoWillHideView:(id)arg1;
- (const struct QuotaSimpleSortDescriptor *)sortDescriptorAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfSortDescriptors;
- (void)engineUpdated:(id)arg1;
- (void)_stopProgress:(id)arg1;
- (void)_updateProgress:(id)arg1;
- (void)updateProgress:(id)arg1;
- (void)engineDidFinish;
- (void)engineDidStart;
- (void)_accountOfflineStatusDidChange:(id)arg1;
- (Class)engineClass;
- (void)dealloc;
- (id)init;
- (id)initWithAccount:(id)arg1;

@end

