/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSData;

@interface MCDataScanner : NSObject
{
    NSData *_myData;
    unsigned long long _myLocation;
}

+ (id)scannerWithData:(id)arg1;
- (BOOL)scanUpToBytesFromSet:(id)arg1 intoData:(id *)arg2;
- (BOOL)_scanUpToBytes:(const void *)arg1 length:(unsigned long long)arg2 intoData:(id *)arg3;
- (BOOL)scanUpToCString:(const char *)arg1 intoData:(id *)arg2;
- (BOOL)scanUpToData:(id)arg1 intoData:(id *)arg2;
- (BOOL)scanBytesFromSet:(id)arg1 intoData:(id *)arg2;
- (BOOL)_scanBytes:(const void *)arg1 length:(unsigned long long)arg2 intoData:(id *)arg3;
- (BOOL)scanCString:(const char *)arg1 intoData:(id *)arg2;
- (BOOL)scanData:(id)arg1 intoData:(id *)arg2;
- (BOOL)scanInteger:(long long *)arg1;
- (BOOL)scanByte:(char *)arg1;
- (BOOL)isAtEnd;
- (void)setScanLocation:(unsigned long long)arg1;
- (unsigned long long)scanLocation;
- (id)data;
- (void)dealloc;
- (id)initWithData:(id)arg1;

@end

