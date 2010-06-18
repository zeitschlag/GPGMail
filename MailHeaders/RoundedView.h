/*
 *     Generated by class-dump 3.2 (32 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSView.h"

@class NSColor;

@interface RoundedView : NSView
{
    NSColor *_backgroundColor;
    NSColor *_borderColor;
}

- (BOOL)isFlipped;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (id)borderColor;
- (void)setBorderColor:(id)arg1;

@end

