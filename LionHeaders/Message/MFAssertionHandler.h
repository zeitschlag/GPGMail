/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSAssertionHandler.h"

@interface MFAssertionHandler : NSAssertionHandler
{
}

+ (void)installDefaultAssertionHandler;
+ (id)_Message_currentHandler;
- (void)handleFailureInMethod:(SEL)arg1 object:(id)arg2 file:(id)arg3 lineNumber:(long long)arg4 description:(id)arg5;
- (void)handleFailureInFunction:(id)arg1 file:(id)arg2 lineNumber:(long long)arg3 description:(id)arg4;
- (void)_handleFailureWithPreamble:(id)arg1 description:(id)arg2 arguments:(CDStruct_19b88e92 [1])arg3;

@end
