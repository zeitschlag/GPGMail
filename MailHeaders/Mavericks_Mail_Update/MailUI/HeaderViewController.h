/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSViewController.h"

#import "HeaderLayoutManagerDelegate.h"
#import "NSTextStorageDelegate.h"
#import "NSTokenAttachmentDelegate.h"

@class HeaderLayoutManager, HeaderTextContainer, HeaderTextView, HeaderView, NSButton, NSFont, NSImageView, NSLayoutConstraint, NSMutableDictionary, NSMutableSet, NSTextAttachment, NSTextField, NSView;

@interface HeaderViewController : NSViewController <HeaderLayoutManagerDelegate, NSTextStorageDelegate, NSTokenAttachmentDelegate>
{
    long long _detailsHidden;
    long long _detailLevel;
    long long _addressDisplayMode;
    BOOL _showMailboxLink;
    BOOL _showMessageNumber;
    BOOL _showVIPButton;
    NSFont *_font;
    HeaderView *_view;
    NSTextField *_dateReceivedField;
    NSButton *_detailsButton;
    NSView *_dividerView;
    NSButton *_mailboxNameButton;
    NSTextField *_messageNumberField;
    NSImageView *_senderImageView;
    NSButton *_unreadVIPButton;
    HeaderLayoutManager *_layoutManager;
    HeaderTextContainer *_textContainer;
    HeaderTextView *_textView;
    NSTextAttachment *_flagTextAttachment;
    NSTextAttachment *_attachmentTextAttachment;
    NSMutableDictionary *_displayStringsByHeaderKey;
    NSMutableSet *_expandedHeaderKeys;
    NSLayoutConstraint *_dateReceivedFieldTopAlignmentConstraint;
    NSLayoutConstraint *_dateReceivedFieldTrailingSpaceConstraint;
    NSLayoutConstraint *_dividerViewTrailingAlignmentConstraint;
    NSLayoutConstraint *_mailboxNameButtonBottomSpaceConstraint;
    NSLayoutConstraint *_mailboxNameButtonTrailingSpaceConstraint;
    NSLayoutConstraint *_messageNumberFieldBottomSpaceConstraint;
    NSLayoutConstraint *_senderImageViewBottomSpaceConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *senderImageViewBottomSpaceConstraint; // @synthesize senderImageViewBottomSpaceConstraint=_senderImageViewBottomSpaceConstraint;
@property(retain, nonatomic) NSLayoutConstraint *messageNumberFieldBottomSpaceConstraint; // @synthesize messageNumberFieldBottomSpaceConstraint=_messageNumberFieldBottomSpaceConstraint;
@property(retain, nonatomic) NSLayoutConstraint *mailboxNameButtonTrailingSpaceConstraint; // @synthesize mailboxNameButtonTrailingSpaceConstraint=_mailboxNameButtonTrailingSpaceConstraint;
@property(retain, nonatomic) NSLayoutConstraint *mailboxNameButtonBottomSpaceConstraint; // @synthesize mailboxNameButtonBottomSpaceConstraint=_mailboxNameButtonBottomSpaceConstraint;
@property(retain, nonatomic) NSLayoutConstraint *dividerViewTrailingAlignmentConstraint; // @synthesize dividerViewTrailingAlignmentConstraint=_dividerViewTrailingAlignmentConstraint;
@property(retain, nonatomic) NSLayoutConstraint *dateReceivedFieldTrailingSpaceConstraint; // @synthesize dateReceivedFieldTrailingSpaceConstraint=_dateReceivedFieldTrailingSpaceConstraint;
@property(retain, nonatomic) NSLayoutConstraint *dateReceivedFieldTopAlignmentConstraint; // @synthesize dateReceivedFieldTopAlignmentConstraint=_dateReceivedFieldTopAlignmentConstraint;
@property(readonly, nonatomic) NSMutableSet *expandedHeaderKeys; // @synthesize expandedHeaderKeys=_expandedHeaderKeys;
@property(readonly, nonatomic) NSMutableDictionary *displayStringsByHeaderKey; // @synthesize displayStringsByHeaderKey=_displayStringsByHeaderKey;
@property(readonly, nonatomic) NSTextAttachment *attachmentTextAttachment; // @synthesize attachmentTextAttachment=_attachmentTextAttachment;
@property(readonly, nonatomic) NSTextAttachment *flagTextAttachment; // @synthesize flagTextAttachment=_flagTextAttachment;
@property(retain, nonatomic) HeaderTextView *textView; // @synthesize textView=_textView;
@property(readonly, nonatomic) HeaderTextContainer *textContainer; // @synthesize textContainer=_textContainer;
@property(readonly, nonatomic) HeaderLayoutManager *layoutManager; // @synthesize layoutManager=_layoutManager;
@property(retain, nonatomic) NSButton *unreadVIPButton; // @synthesize unreadVIPButton=_unreadVIPButton;
@property(retain, nonatomic) NSImageView *senderImageView; // @synthesize senderImageView=_senderImageView;
@property(retain, nonatomic) NSTextField *messageNumberField; // @synthesize messageNumberField=_messageNumberField;
@property(retain, nonatomic) NSButton *mailboxNameButton; // @synthesize mailboxNameButton=_mailboxNameButton;
@property(retain, nonatomic) NSView *dividerView; // @synthesize dividerView=_dividerView;
@property(retain, nonatomic) NSButton *detailsButton; // @synthesize detailsButton=_detailsButton;
@property(retain, nonatomic) NSTextField *dateReceivedField; // @synthesize dateReceivedField=_dateReceivedField;
- (void)toggleVIP:(id)arg1;
- (void)toggleDetails:(id)arg1;
- (void)showSignerCertificate:(id)arg1;
- (id)menuForTokenAttachment:(id)arg1;
- (BOOL)hasMenuForTokenAttachment:(id)arg1;
- (BOOL)textView:(id)arg1 writeCell:(id)arg2 atIndex:(unsigned long long)arg3 toPasteboard:(id)arg4 type:(id)arg5;
- (id)textView:(id)arg1 writablePasteboardTypesForCell:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)textView:(id)arg1 willDisplayToolTip:(id)arg2 forCharacterAtIndex:(unsigned long long)arg3;
- (id)textView:(id)arg1 menu:(id)arg2 forEvent:(id)arg3 atIndex:(unsigned long long)arg4;
- (void)textView:(id)arg1 clickedOnCell:(id)arg2 inRect:(struct CGRect)arg3 atIndex:(unsigned long long)arg4;
- (id)layoutManager:(id)arg1 shouldUseSelectedTextAttributes:(id)arg2 atCharacterIndex:(unsigned long long)arg3 effectiveRange:(struct _NSRange *)arg4;
- (void)layoutManager:(id)arg1 textContainerChangedGeometry:(id)arg2;
- (void)_layoutTextStorageIfNeeded;
- (id)_displayStringForSecurityKey;
- (id)_displayStringForHeaderKey:(id)arg1;
- (id)_displayStringForCombinedRecipientsKey;
- (id)_displayStringForAddressHeaderKey:(id)arg1;
- (void)_updateUnreadVIPButton;
- (void)_updateTextStorageWithHardInvalidation:(BOOL)arg1;
- (void)_updateSenderImageView;
- (void)_updateMessageNumberField;
- (void)_updateMailboxNameButton;
- (void)_updateFlagTextAttachment;
- (void)_updateDividerView;
- (void)_updateDetailsButton;
- (void)_updateDateReceivedField;
- (void)_updateAttachmentTextAttachment;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(nonatomic) BOOL showVIPButton;
@property(nonatomic) BOOL showMailboxLink;
@property(nonatomic) BOOL showMessageNumber;
@property(copy, nonatomic) NSFont *font;
@property(nonatomic) long long detailLevel;
@property(nonatomic) long long detailsHidden;
@property(nonatomic) long long addressDisplayMode;
- (void)setRepresentedObject:(id)arg1;
- (id)representedObject;
- (void)setView:(id)arg1;
- (id)view;
- (void)dealloc;
- (void)_setupTextSystem;
- (void)_setupControls;
- (void)awakeFromNib;
- (void)_headerViewControllerCommonInit;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end

