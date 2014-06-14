/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSPopUpButton, NSView;

@interface SpecialMailboxes : NSObject
{
    NSPopUpButton *_sentMessagesAgePopup;
    NSPopUpButton *_junkAgePopup;
    NSPopUpButton *_trashAgePopup;
    NSView *_view;
}

+ (id)specialMailboxesForAccountClass:(Class)arg1;
@property(retain, nonatomic) NSView *view; // @synthesize view=_view;
- (void)postSpecialMailboxesDidChangeNotification:(id)arg1;
- (void)setUIElementsEnabled:(BOOL)arg1;
- (BOOL)isAccountInformationDirty:(id)arg1;
- (BOOL)setupAccountFromValuesInUI:(id)arg1;
- (void)setupUIFromValuesInAccount:(id)arg1;
- (void)dealloc;

@end

