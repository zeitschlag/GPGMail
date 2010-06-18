/*
 *     Generated by class-dump 3.2 (32 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSButton, NSPopUpButton, NSSavePanel, NSSet, NSString, NSWindow;

@interface MessageSaver : NSObject
{
    NSArray *_messages;
    NSSet *_stores;
    NSSavePanel *_savePanel;
    NSWindow *_window;
    NSString *_path;
    unsigned int _haveAttachments:1;
    unsigned int _hideExtension:1;
    unsigned int _includeAttachments:1;
    unsigned int _saveFormat:4;
    unsigned int _headerDetailLevel:4;
    NSPopUpButton *formatPopup;
    NSButton *includeAttachmentsSwitch;
}

+ (void)initialize;
+ (void)saveMessages:(id)arg1 headerDetailLevel:(int)arg2 preferredFormat:(int)arg3 window:(id)arg4;
- (void)dealloc;
- (void)saveMessagesWithoutPrompting:(id)arg1 toFilename:(id)arg2 headerDetailLevel:(int)arg3 format:(int)arg4;
- (void)setMessages:(id)arg1;
- (void)setHeaderDetailLevel:(int)arg1;
- (void)setSaveFormat:(int)arg1;
- (void)setWindow:(id)arg1;
- (void)savePanelDidEnd:(id)arg1 alertReturn:(long)arg2 context:(void *)arg3;
- (void)runSavePanelForStationery;
- (void)runSavePanel;
- (void)updateSavePanelUI;
- (void)saveMessages;
- (void)handleSaveError:(id)arg1;
- (void)changeFormat:(id)arg1;
- (void)changeIncludeAttachments:(id)arg1;
- (id)separator;

@end

