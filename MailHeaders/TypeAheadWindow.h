/*
 *     Generated by class-dump 3.2 (32 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSWindow.h"

@class TypeAheadResponder;

@interface TypeAheadWindow : NSWindow
{
    TypeAheadResponder *_typeAheadResponder;
    BOOL sendMouseDownNotifications;
}

- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long)arg2 backing:(unsigned long)arg3 defer:(BOOL)arg4 screen:(id)arg5;
- (void)dealloc;
- (void)setTypeAheadInitialFirstResponder;
- (void)sendEvent:(id)arg1;
- (void)sendMouseDownNotifications:(BOOL)arg1;
- (void)flushTypeAheadEvents;

@end

