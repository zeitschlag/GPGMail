/*
 *     Generated by class-dump 3.2 (32 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "RemoteStoreAccountSpecialMailboxes.h"

@class NSButton;

@interface IMAPAccountSpecialMailboxes : RemoteStoreAccountSpecialMailboxes
{
    NSButton *_trashCheckbox;
    BOOL _moveDeletedMessagesToTrash;
}

- (id)init;
- (void)setupUIFromValuesInAccount:(id)arg1;
- (BOOL)setupAccountFromValuesInUI:(id)arg1;
- (BOOL)isAccountInformationDirty:(id)arg1;
- (void)setUIElementsEnabled:(BOOL)arg1;
- (BOOL)moveDeletedMessagesToTrash;
- (void)setMoveDeletedMessagesToTrash:(BOOL)arg1;

@end

