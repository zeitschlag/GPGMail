/*
 *     Generated by class-dump 3.2 (32 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "DocumentEditor.h"

@class MailDocumentEditor;

@interface NoteDocumentEditor : DocumentEditor
{
    MailDocumentEditor *_mailEditor;
    id _webViewPolicyDelegate;
    struct {
        unsigned int isFirstView:1;
        unsigned int isLastView:1;
        unsigned int isPaperless:1;
        unsigned int isEditingPaused:1;
        unsigned int isClosed:1;
        unsigned int preventClose:1;
        unsigned int otherEditorHasChanges:1;
        unsigned int isReadOnly:1;
        unsigned int contentIsPrepared:1;
    } _noteFlags;
}

+ (BOOL)usesCustomScroller;
+ (BOOL)documentType;
+ (id)documentEditors;
+ (id)documentWebPreferencesIdentifierForRichText:(BOOL)arg1;
+ (void)restoreDraftMessage:(id)arg1 withSavedState:(id)arg2;
+ (id)createEditorWithSettings:(id)arg1;
+ (id)createEditorWithEditor:(id)arg1;
+ (id)editorForNote:(id)arg1;
+ (id)editorForNote:(id)arg1 forSingleMessageViewer:(BOOL)arg2;
+ (id)editorWithSettings:(id)arg1;
+ (id)_editorWithSettings:(id)arg1 forSingleMessageViewer:(BOOL)arg2;
- (id)webViewEditor;
- (BOOL)otherEditorHasChanges;
- (void)setOtherEditorHasChanges:(BOOL)arg1;
- (BOOL)isReadOnly;
- (void)setIsReadOnly:(BOOL)arg1;
- (BOOL)isFirstView;
- (void)setIsFirstView:(BOOL)arg1;
- (BOOL)isLastView;
- (void)setIsLastView:(BOOL)arg1;
- (BOOL)isPaperless;
- (void)setIsPaperless:(BOOL)arg1;
- (BOOL)isEditingPaused;
- (void)setIsEditingPaused:(BOOL)arg1;
- (BOOL)isClosed;
- (void)setIsClosed:(BOOL)arg1;
- (BOOL)preventClose;
- (void)setPreventClose:(BOOL)arg1;
- (BOOL)contentIsPrepared;
- (void)setContentIsPrepared:(BOOL)arg1;
- (BOOL)isSelectionEditable;
- (BOOL)displayToDoMessageReference;
- (void)showPrintPanel:(id)arg1;
- (void)printOperationDidRun:(id)arg1 success:(BOOL)arg2 contextInfo:(void *)arg3;
- (id)initWithType:(int)arg1 settings:(id)arg2 backEnd:(id)arg3;
- (id)loadInterfaceOperation;
- (void)prepareContent;
- (void)loadNotePaper;
- (void)finishLoadingEditor;
- (BOOL)windowShouldClose:(id)arg1;
- (void)didLoadNotePaper;
- (BOOL)load;
- (id)documentModifiedNotification;
- (id)editorID;
- (void)documentClosed:(id)arg1;
- (void)documentModified:(id)arg1;
- (void)beginDocumentMove;
- (void)endDocumentMove;
- (id)loadInitialDocumentOperation;
- (id)mailEditor;
- (void)setMailEditor:(id)arg1;
- (void)dealloc;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)canSave;
- (BOOL)hasChanges;
- (void)pauseEditing;
- (void)resumeEditing;
- (void)makePaperbacked;
- (void)addTitleAndFooter;
- (void)webViewDidChange:(id)arg1;
- (void)backupWebViewDelegates;
- (void)restoreWebViewDelegates;
- (id)resource;
- (id)_frameSaveName;
- (id)contentWebFrame;
- (void)composePrefsChanged;
- (void)reportSaveFailure:(id)arg1;
- (void)_mailAccountsDidChange;
- (Class)backEndClass;
- (int)editorSharedNib;
- (id)toolbarIdentifier;
- (void)documentsWillBeginTransfer:(id)arg1;
- (void)documentsDidEndTransfer:(id)arg1;
- (void)editorDidLoad:(id)arg1;
- (void)editorFailedLoad:(id)arg1;
- (void)show;
- (void)forceClose;
- (id)mailAttachmentsAdded:(id)arg1;
- (void)backEndDidLoadInitialContent:(id)arg1;
- (void)themeWebFrameScrollers:(id)arg1;
- (void)send:(id)arg1;
- (BOOL)_sendButtonShouldBeEnabled;

@end

