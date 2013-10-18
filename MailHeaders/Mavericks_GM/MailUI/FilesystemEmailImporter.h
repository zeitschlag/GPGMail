/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "EmailImporter.h"

@interface FilesystemEmailImporter : EmailImporter
{
}

- (void)verifyFromSpaceHeaderForScanner:(id)arg1 dataLength:(long long)arg2;
- (void)sniffLineDelimiterFromData:(id)arg1;
- (BOOL)isValidMailbox:(id)arg1;
- (char *)fromString;
- (id)pathExtensions;
- (void)readMailbox:(id)arg1 intoMailbox:(id)arg2;
- (void)processUserSelection;
- (double)progressValueForMailboxAtPath:(id)arg1;
- (id)prepareForImport;

@end
