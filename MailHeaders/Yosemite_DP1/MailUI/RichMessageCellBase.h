/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSTableCellView.h"

@class MCMessage, MessageListObjectProxy;

@interface RichMessageCellBase : NSTableCellView
{
}

+ (id)keyPathsForValuesAffectingMessage;
+ (double)heightWithNumberOfSnippetLines:(unsigned long long)arg1;
@property(readonly, nonatomic) MCMessage *message;
- (void)setBackgroundStyle:(long long)arg1;

// Remaining properties
@property(retain) MessageListObjectProxy *objectValue;

@end

