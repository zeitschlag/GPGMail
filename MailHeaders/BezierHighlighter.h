/*
 *     Generated by class-dump 3.2 (32 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSObject.h"

#import "WebHTMLHighlighter-Protocol.h"

@class NSBezierPath, NSColor;

@interface BezierHighlighter : NSObject <WebHTMLHighlighter>
{
    NSBezierPath *_lightPath;
    NSBezierPath *_darkPath;
    struct CGRect _combinedBounds;
    NSColor *_lightColor;
    NSColor *_darkColor;
}

+ (void)initialize;
+ (id)sharedHighlighter;
+ (id)sharedGrayHighlighter;
- (void)dealloc;
- (id)initWithDarkColor:(id)arg1 lightColor:(id)arg2;
- (id)init;
- (void)paintInRect:(struct CGRect)arg1 clipAt:(struct CGRect)arg2 clipOut:(BOOL)arg3;
- (struct CGRect)highlightRectForLine:(struct CGRect)arg1;
- (void)paintHighlightForBox:(struct CGRect)arg1 onLine:(struct CGRect)arg2 behindText:(BOOL)arg3 entireLine:(BOOL)arg4;
- (struct CGPoint)hPaddingForToDoLineId:(id)arg1;
- (struct CGRect)highlightRectForLine:(struct CGRect)arg1 representedNode:(id)arg2;
- (void)paintHighlightForBox:(struct CGRect)arg1 onLine:(struct CGRect)arg2 behindText:(BOOL)arg3 entireLine:(BOOL)arg4 representedNode:(id)arg5;

@end

