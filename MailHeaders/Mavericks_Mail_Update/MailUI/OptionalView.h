/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSView.h"

@class NSButton, NSTextField;

@interface OptionalView : NSView
{
    BOOL _isResizing;
    NSView *_primaryView;
    NSButton *_optionSwitch;
    NSTextField *_label;
    struct CGRect _originalFrame;
}

@property(nonatomic) struct CGRect originalFrame; // @synthesize originalFrame=_originalFrame;
@property(nonatomic) NSTextField *label; // @synthesize label=_label;
@property(nonatomic) NSButton *optionSwitch; // @synthesize optionSwitch=_optionSwitch;
@property(nonatomic) NSView *primaryView; // @synthesize primaryView=_primaryView;
- (double)widthOffsetIncludingOptionSwitch:(BOOL)arg1;
- (double)widthIncludingOptionSwitch:(BOOL)arg1;
- (void)sizeToFit;
- (BOOL)isOpaque;
- (BOOL)isFlipped;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_subviewFrameDidChange:(id)arg1;
- (void)willRemoveSubview:(id)arg1;
- (void)didAddSubview:(id)arg1;
- (void)awakeFromNib;
- (void)dealloc;

@end

