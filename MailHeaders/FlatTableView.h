/*
 *     Generated by class-dump 3.2 (32 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSTableView.h"

@class NSImage;

@interface FlatTableView : NSTableView
{
    NSImage *selectionHighlightLeftEndCap;
    NSImage *selectionHighlightCenter;
    NSImage *selectionHighlightRightEndCap;
    NSImage *dropDestinationLeftEndCap;
    NSImage *dropDestinationCenter;
    NSImage *dropDestinationRightEndCap;
}

- (void)awakeFromNib;
- (void)dealloc;
- (void)highlightSelectionInClipRect:(struct CGRect)arg1;
- (void)_drawDropHighlightBackgroundForRow:(long)arg1;
- (void)_drawDropHighlightOnRow:(long)arg1;
- (void)highlightRow:(long)arg1 withLeftEndCap:(id)arg2 center:(id)arg3 rightEndCap:(id)arg4;
- (id)_highlightColorForCell:(id)arg1;
- (void)tile;
- (BOOL)isOpaque;

@end

