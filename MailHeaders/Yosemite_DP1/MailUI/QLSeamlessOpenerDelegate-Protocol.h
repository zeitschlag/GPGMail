/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@protocol QLSeamlessOpenerDelegate <NSObject>

@optional
- (id)seamlessOpener:(id)arg1 transientWindowForItem:(id)arg2;
- (id)seamlessOpener:(id)arg1 transientImageAtFrame:(struct CGRect *)arg2 forItem:(id)arg3;
- (void)seamlessOpener:(id)arg1 failedToOpenItems:(id)arg2 withError:(id)arg3;
- (void)seamlessOpener:(id)arg1 openedItem:(id)arg2 seamlessly:(BOOL)arg3;
- (id)seamlessOpenerTransientWindow:(id)arg1 level:(long long *)arg2;
- (int)seamlessOpener:(id)arg1 supportForPreviewItem:(id)arg2;
- (id)seamlessOpener:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(struct CGRect *)arg3;
- (id)seamlessOpener:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(struct CGRect *)arg3 windowLevel:(long long *)arg4;
- (struct CGRect)seamlessOpener:(id)arg1 sourceFrameOnScreenForPreviewItem:(id)arg2;
- (id)seamlessOpener:(id)arg1 sourceBubbleForPreviewItem:(id)arg2;
- (id)seamlessOpener:(id)arg1 sourcePreviewViewForPreviewItem:(id)arg2;
@end

