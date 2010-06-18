/*
 *     Generated by class-dump 3.2 (32 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSView.h"

@class WebView;

@interface NoteView : NSView
{
    WebView *_webView;
}

+ (float)margin;
+ (BOOL)isNoteURL:(id)arg1;
+ (BOOL)isToDoURL:(id)arg1;
+ (float)ruleHeight;
+ (id)ruleColor;
+ (id)opaqueRuleColor;
+ (id)redLineColor;
+ (id)stationeryBlueLineGIFData;
+ (void)setStationeryBlueLineGIFData:(id)arg1;
+ (id)stationeryRedLinesGIFData;
+ (void)setStationeryRedLinesGIFData:(id)arg1;
+ (id)stationeryPaddingTop;
+ (void)setStationeryPaddingTop:(id)arg1;
+ (id)blueLineImageWithSize:(struct CGSize)arg1 lineThickness:(float)arg2 lineColor:(id)arg3 imageType:(unsigned long)arg4;
+ (id)redLinesImageWithSize:(struct CGSize)arg1;
+ (id)blueLineImageStringForHeight:(id)arg1;
+ (void)updateFontAndRule:(id)arg1;
- (id)webView;
- (void)setWebView:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (BOOL)isFlipped;
- (void)dealloc;

@end

