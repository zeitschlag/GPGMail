/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "ComposeBackEnd.h"

@class NSTextStorage;

@interface ComposeBackEnd_Scripting : ComposeBackEnd
{
    NSTextStorage *_textStorage;
}

@property(retain, nonatomic) NSTextStorage *textStorage; // @synthesize textStorage=_textStorage;
- (void).cxx_destruct;
- (void)_coalescedConvertTextStorage;
- (void)_convertTextStorage;
- (void)_pushTextStorage;
- (void)setContent:(id)arg1;
- (id)content;

@end

