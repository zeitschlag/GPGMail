/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSScroller.h"

@class NSImage;

@interface MailScroller : NSScroller
{
    BOOL _isVertical;
    NSImage *_paddingImage;
    NSImage *_hiddenImage;
    NSImage *_slotStartImage;
    NSImage *_slotMiddleImage;
    NSImage *_slotEndImage;
    NSImage *_knobStartImage;
    NSImage *_knobMiddleImage;
    NSImage *_knobEndImage;
    double _startPadding;
    double _endPadding;
}

@property BOOL isVertical; // @synthesize isVertical=_isVertical;
@property double endPadding; // @synthesize endPadding=_endPadding;
@property double startPadding; // @synthesize startPadding=_startPadding;
@property(retain) NSImage *knobEndImage; // @synthesize knobEndImage=_knobEndImage;
@property(retain) NSImage *knobMiddleImage; // @synthesize knobMiddleImage=_knobMiddleImage;
@property(retain) NSImage *knobStartImage; // @synthesize knobStartImage=_knobStartImage;
@property(retain) NSImage *slotEndImage; // @synthesize slotEndImage=_slotEndImage;
@property(retain) NSImage *slotMiddleImage; // @synthesize slotMiddleImage=_slotMiddleImage;
@property(retain) NSImage *slotStartImage; // @synthesize slotStartImage=_slotStartImage;
@property(retain) NSImage *hiddenImage; // @synthesize hiddenImage=_hiddenImage;
@property(retain) NSImage *paddingImage; // @synthesize paddingImage=_paddingImage;
- (BOOL)isOpaque;
- (void)setImagesFlipped:(BOOL)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawImage:(id)arg1 asPart:(int)arg2 withDirtyRect:(struct CGRect)arg3;
- (BOOL)isUseful;
- (struct CGRect)rectForPart:(unsigned long long)arg1;
- (struct CGRect)_drawingRectForPart:(unsigned long long)arg1;
- (struct CGRect)_drawingRectForCustomPart:(int)arg1;
- (double)_getLengthFromImage:(id)arg1;
- (double)_getLengthFromSize:(struct CGSize)arg1;
- (struct CGRect)_rectWithRect:(struct CGRect)arg1 offset:(double)arg2 length:(double)arg3;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 isVertical:(BOOL)arg2;

@end

