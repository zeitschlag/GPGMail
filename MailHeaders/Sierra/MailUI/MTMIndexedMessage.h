//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTMMessage.h"

@class NSDictionary, NSMutableDictionary, NSString;

@interface MTMIndexedMessage : MTMMessage
{
    NSString *_realPath;	// 16 = 0x10
    BOOL _realPathComputed;	// 24 = 0x18
    NSString *_to;	// 32 = 0x20
    NSMutableDictionary *_computedAdditionalProperties;	// 40 = 0x28
    BOOL _hasCachedChange;	// 48 = 0x30
    BOOL _cachedChange;	// 49 = 0x31
    NSString *_identifier;	// 56 = 0x38
    NSDictionary *_attributes;	// 64 = 0x40
    unsigned long long _messageSize;	// 72 = 0x48
    unsigned long long _messageFlags;	// 80 = 0x50
    unsigned long long _readFlags;	// 88 = 0x58
}

- (unsigned long long)readFlags;	// IMP=0x0000000100254008
- (unsigned long long)messageFlags;	// IMP=0x0000000100253ff7
- (unsigned long long)messageSize;	// IMP=0x0000000100253fe6
@property(nonatomic) BOOL cachedChange; // @synthesize cachedChange=_cachedChange;
@property(nonatomic) BOOL hasCachedChange; // @synthesize hasCachedChange=_hasCachedChange;
@property(readonly, copy, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;	// IMP=0x0000000100254019
- (void)updateAdditionalPropertiesFromComputedProperties;	// IMP=0x0000000100253f39
- (void)computeAdditionalProperties;	// IMP=0x0000000100253c9b
- (BOOL)messageHasChangedFromSnapshot:(id)arg1;	// IMP=0x0000000100253bb1
- (id)to;	// IMP=0x0000000100253ad8
- (id)savedDate;	// IMP=0x0000000100253a7e
- (id)subject;	// IMP=0x0000000100253a24
- (id)URL;	// IMP=0x00000001002539c3
- (id)path;	// IMP=0x0000000100253720
- (id)init;	// IMP=0x0000000100253651
- (id)initWithIdentifier:(id)arg1 attributes:(id)arg2;	// IMP=0x0000000100253589

@end
