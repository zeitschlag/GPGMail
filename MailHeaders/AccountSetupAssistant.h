/*
 *     Generated by class-dump 3.2 (32 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "Assistant.h"

#import "AccountAutoconfiguratorDelegate-Protocol.h"
#import "AccountSetupValidatorDelegate-Protocol.h"

@class AccountAutoconfigurator, AccountSetupValidator, AccountSummary, AuthScheme, DeliveryAccount, MailAccount, NSArray, NSAttributedString, NSDictionary, NSMutableArray, NSNumber, NSPopUpButton, NSString, NSTabView, NSTextField, NSURL, NSView;

@interface AccountSetupAssistant : Assistant <AccountAutoconfiguratorDelegate, AccountSetupValidatorDelegate>
{
    NSView *_topView;
    NSTabView *_tabView;
    NSView *_summaryContainerView;
    NSPopUpButton *_incomingTypePopUp;
    NSPopUpButton *_incomingAuthPopUp;
    NSPopUpButton *_outgoingAuthPopUp;
    NSView *_firstKeyViewForBasicInformation;
    NSView *_firstKeyViewForBasicWithUser;
    NSView *_firstKeyViewForIncomingServer;
    NSView *_firstKeyViewForIncomingSecurity;
    NSView *_firstKeyViewForOutgoingServer;
    NSView *_firstKeyViewForOutgoingSecurity;
    NSView *_lastKeyViewForBasicInformation;
    NSView *_lastKeyViewForBasicWithUser;
    NSView *_lastKeyViewForIncomingServer;
    NSView *_lastKeyViewForIncomingSecurity;
    NSView *_lastKeyViewForOutgoingServer;
    NSView *_lastKeyViewForOutgoingSecurity;
    NSView *_firstResponderForBasicInformation;
    NSView *_firstResponderForBasicWithUser;
    NSView *_firstResponderForIncomingServer;
    BOOL _canUseAutomaticSetup;
    BOOL _shouldUseAutomaticSetup;
    BOOL _canUseSimplifiedSetup;
    BOOL _addressIsForEWSAccount;
    BOOL _canGoBack;
    NSString *_nextButtonTitle;
    int _selectedTab;
    NSMutableArray *_previousTabs;
    NSDictionary *_receivingAccountInfo;
    NSDictionary *_deliveryAccountLookup;
    NSArray *_deliveryAccountKeys;
    MailAccount *_receivingAccount;
    DeliveryAccount *_deliveryAccount;
    AccountSummary *_summary;
    AccountSetupValidator *_validator;
    int _receivingValidationStatus;
    int _deliveryValidationStatus;
    AccountAutoconfigurator *_autoconfigurator;
    int _autoconfigurationStatus;
    BOOL _autoconfigureWithOptionKeyDown;
    BOOL _forceManualSetupWithOptionKeyDown;
    BOOL _forceManualSetup;
    NSString *_windowTitle;
    NSString *_firstPaneTitle;
    NSString *_firstPaneDescription;
    NSView *_automaticSetupContainerView;
    NSArray *_automaticSetupViews;
    NSView *_autoconfigurationSummarySetupContainerView;
    NSView *_automaticSetupCheckboxView;
    NSView *_addCalendarsView;
    NSView *_addContactsAndCalendarsView;
    BOOL _addAccountToiCal;
    BOOL _addAccountToAddressBook;
    BOOL _canAddAccountToiCal;
    BOOL _canAddAccountToAddressBook;
    NSString *_addAccountToiCalToolTip;
    NSString *_addAccountToAddressBookToolTip;
    NSView *_addEWSAccountCheckBoxSection;
    NSTextField *_incomingOutlookServerField;
    NSString *_name;
    NSString *_emailAddress;
    NSString *_password;
    BOOL _isEmailAddressValid;
    int _incomingAccountClassIndex;
    NSString *_incomingAccountTypeString;
    NSString *_incomingDescription;
    NSString *_incomingMailServer;
    NSString *_incomingUserName;
    NSString *_incomingOutlookServer;
    NSNumber *_incomingPortNumber;
    BOOL _isIncomingMailServerValid;
    BOOL _isIncomingUserNameValid;
    BOOL _isIncomingOutlookServerValid;
    BOOL _hideIncomingOutlookServer;
    BOOL _hideExchangeAccountType;
    BOOL _hideAOSAccountType;
    BOOL _incomingAuthUseSSL;
    AuthScheme *_incomingAuthScheme;
    NSString *_incomingAuthDomainName;
    NSURL *_incomingInternalURL;
    NSURL *_incomingExternalURL;
    NSString *_outgoingDescription;
    NSString *_outgoingMailServer;
    BOOL _outgoingUseOnly;
    BOOL _outgoingUseAuthentication;
    NSString *_outgoingUserName;
    NSString *_outgoingPassword;
    NSNumber *_outgoingPortNumber;
    BOOL _isOutgoingMailServerValid;
    BOOL _outgoingAuthUseSSL;
    AuthScheme *_outgoingAuthScheme;
    NSString *_outgoingAuthDomainName;
    NSAttributedString *_statusMessage;
    BOOL _showStatusAlert;
    BOOL _takeAccountOnline;
}

+ (id)keyPathsForValuesAffectingActionInProgress;
+ (id)keyPathsForValuesAffectingCanGoForward;
- (id)initWithAssistentManager:(id)arg1 isForStartup:(BOOL)arg2;
- (id)initWithAssistentManager:(id)arg1;
- (void)dealloc;
- (id)_usernameForEmailAddress:(id)arg1 ispAccount:(id)arg2;
- (void)_syncBindings;
- (void)_setupLegacyStuff;
- (void)_animateEWSCheckBoxes;
- (id)_statusMessageAttributes;
- (id)_statusMessageWithString:(id)arg1;
- (void)_clearPropertyValues;
- (void)_loadDefaultPropertyValues;
- (void)_loadPropertiesFromReceivingInfo:(id)arg1;
- (void)_loadPropertiesFromDeliveryInfo:(id)arg1 reset:(BOOL)arg2;
- (void)_updateAccountsFromPropertiesAtTab:(long)arg1;
- (BOOL)_shouldSkip:(long)arg1;
- (void)start;
- (void)stop;
- (void)goForward;
- (void)goBackward;
- (BOOL)shouldStop;
- (void)_pushTab:(long)arg1;
- (long)_popTab;
- (void)setupKeyViewLoop;
- (BOOL)_validateTab:(long)arg1;
- (void)_registerObservers;
- (void)_unregisterObservers;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)validateOutgoingMailServer:(id *)arg1 error:(id *)arg2;
- (BOOL)actionInProgress;
- (BOOL)canGoForward;
- (void)_modifierFlagsChanged:(id)arg1;
- (void)_updateTab:(long)arg1;
- (void)_updateNextButtonTitle;
- (void)_updateHelpTag;
- (id)_domainFromEmailAddress;
- (void)_updateAutomaticSetupFromEmailAddress;
- (void)_updateAutomaticSetupViews;
- (void)_updateAutomaticSetupKeyViewLoop;
- (void)_updateDeliveryAccountLookupFromInfos:(id)arg1;
- (BOOL)_canUseAutomaticSetupForDomain:(id)arg1;
- (id)_automaticSetupViewsForDomain:(id)arg1;
- (void)_autoconfigureAccounts;
- (void)_clearAutoconfigurator;
- (void)autoconfigurator:(id)arg1 didChangeState:(long)arg2;
- (void)autoconfiguratorDidFail:(id)arg1;
- (void)autoconfiguratorDidFinish:(id)arg1;
- (void)insecurePasswordSheetDidEnd:(id)arg1 returnCode:(long)arg2 contextInfo:(void *)arg3;
- (void)_validateReceivingAccount;
- (void)_validateDeliveryAccount;
- (void)_clearValidator;
- (void)_extractSecuritySettingsFromValidator:(id)arg1;
- (void)validator:(id)arg1 didChangeState:(long)arg2;
- (void)validatorDidFail:(id)arg1;
- (void)validatorDidFinish:(id)arg1;
- (BOOL)_iCalAccountExistsForHostname:(id)arg1 username:(id)arg2;
- (BOOL)_addressBookAccountExistsForHostname:(id)arg1 username:(id)arg2;
- (void)_addNewAccount;
- (BOOL)takeAccountOnline;
- (void)setTakeAccountOnline:(BOOL)arg1;
- (BOOL)showStatusAlert;
- (void)setShowStatusAlert:(BOOL)arg1;
- (id)statusMessage;
- (void)setStatusMessage:(id)arg1;
- (id)outgoingAuthDomainName;
- (void)setOutgoingAuthDomainName:(id)arg1;
- (id)outgoingAuthScheme;
- (void)setOutgoingAuthScheme:(id)arg1;
- (BOOL)outgoingAuthUseSSL;
- (void)setOutgoingAuthUseSSL:(BOOL)arg1;
- (BOOL)isOutgoingMailServerValid;
- (void)setIsOutgoingMailServerValid:(BOOL)arg1;
- (id)outgoingPortNumber;
- (void)setOutgoingPortNumber:(id)arg1;
- (id)outgoingPassword;
- (void)setOutgoingPassword:(id)arg1;
- (id)outgoingUserName;
- (void)setOutgoingUserName:(id)arg1;
- (BOOL)outgoingUseAuthentication;
- (void)setOutgoingUseAuthentication:(BOOL)arg1;
- (BOOL)outgoingUseOnly;
- (void)setOutgoingUseOnly:(BOOL)arg1;
- (id)outgoingMailServer;
- (void)setOutgoingMailServer:(id)arg1;
- (id)outgoingDescription;
- (void)setOutgoingDescription:(id)arg1;
- (id)incomingExternalURL;
- (void)setIncomingExternalURL:(id)arg1;
- (id)incomingInternalURL;
- (void)setIncomingInternalURL:(id)arg1;
- (id)incomingAuthDomainName;
- (void)setIncomingAuthDomainName:(id)arg1;
- (id)incomingAuthScheme;
- (void)setIncomingAuthScheme:(id)arg1;
- (BOOL)incomingAuthUseSSL;
- (void)setIncomingAuthUseSSL:(BOOL)arg1;
- (BOOL)hideAOSAccountType;
- (void)setHideAOSAccountType:(BOOL)arg1;
- (BOOL)hideExchangeAccountType;
- (void)setHideExchangeAccountType:(BOOL)arg1;
- (BOOL)hideIncomingOutlookServer;
- (void)setHideIncomingOutlookServer:(BOOL)arg1;
- (BOOL)isIncomingOutlookServerValid;
- (void)setIsIncomingOutlookServerValid:(BOOL)arg1;
- (BOOL)isIncomingUserNameValid;
- (void)setIsIncomingUserNameValid:(BOOL)arg1;
- (BOOL)isIncomingMailServerValid;
- (void)setIsIncomingMailServerValid:(BOOL)arg1;
- (id)incomingPortNumber;
- (void)setIncomingPortNumber:(id)arg1;
- (id)incomingOutlookServer;
- (void)setIncomingOutlookServer:(id)arg1;
- (id)incomingUserName;
- (void)setIncomingUserName:(id)arg1;
- (id)incomingMailServer;
- (void)setIncomingMailServer:(id)arg1;
- (id)incomingDescription;
- (void)setIncomingDescription:(id)arg1;
- (id)incomingAccountTypeString;
- (void)setIncomingAccountTypeString:(id)arg1;
- (long)incomingAccountClassIndex;
- (void)setIncomingAccountClassIndex:(long)arg1;
- (BOOL)isEmailAddressValid;
- (void)setIsEmailAddressValid:(BOOL)arg1;
- (id)password;
- (void)setPassword:(id)arg1;
- (id)emailAddress;
- (void)setEmailAddress:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)firstPaneDescription;
- (void)setFirstPaneDescription:(id)arg1;
- (id)firstPaneTitle;
- (void)setFirstPaneTitle:(id)arg1;
- (id)windowTitle;
- (void)setWindowTitle:(id)arg1;
- (int)deliveryValidationStatus;
- (void)setDeliveryValidationStatus:(int)arg1;
- (int)receivingValidationStatus;
- (void)setReceivingValidationStatus:(int)arg1;
- (id)validator;
- (void)setValidator:(id)arg1;
- (BOOL)forceManualSetup;
- (void)setForceManualSetup:(BOOL)arg1;
- (BOOL)forceManualSetupWithOptionKeyDown;
- (void)setForceManualSetupWithOptionKeyDown:(BOOL)arg1;
- (BOOL)autoconfigureWithOptionKeyDown;
- (void)setAutoconfigureWithOptionKeyDown:(BOOL)arg1;
- (int)autoconfigurationStatus;
- (void)setAutoconfigurationStatus:(int)arg1;
- (id)autoconfigurator;
- (void)setAutoconfigurator:(id)arg1;
- (id)summary;
- (void)setSummary:(id)arg1;
- (id)deliveryAccount;
- (void)setDeliveryAccount:(id)arg1;
- (id)receivingAccount;
- (void)setReceivingAccount:(id)arg1;
- (id)deliveryAccountKeys;
- (void)setDeliveryAccountKeys:(id)arg1;
- (id)deliveryAccountLookup;
- (void)setDeliveryAccountLookup:(id)arg1;
- (id)receivingAccountInfo;
- (void)setReceivingAccountInfo:(id)arg1;
- (id)previousTabs;
- (void)setPreviousTabs:(id)arg1;
- (long)selectedTab;
- (void)setSelectedTab:(long)arg1;
- (id)nextButtonTitle;
- (void)setNextButtonTitle:(id)arg1;
- (BOOL)canGoBack;
- (void)setCanGoBack:(BOOL)arg1;
- (id)addAccountToAddressBookToolTip;
- (void)setAddAccountToAddressBookToolTip:(id)arg1;
- (id)addAccountToiCalToolTip;
- (void)setAddAccountToiCalToolTip:(id)arg1;
- (BOOL)canAddAccountToAddressBook;
- (void)setCanAddAccountToAddressBook:(BOOL)arg1;
- (BOOL)canAddAccountToiCal;
- (void)setCanAddAccountToiCal:(BOOL)arg1;
- (BOOL)addAccountToAddressBook;
- (void)setAddAccountToAddressBook:(BOOL)arg1;
- (BOOL)addAccountToiCal;
- (void)setAddAccountToiCal:(BOOL)arg1;
- (BOOL)addressIsForEWSAccount;
- (void)setAddressIsForEWSAccount:(BOOL)arg1;
- (BOOL)canUseSimplifiedSetup;
- (void)setCanUseSimplifiedSetup:(BOOL)arg1;
- (BOOL)shouldUseAutomaticSetup;
- (void)setShouldUseAutomaticSetup:(BOOL)arg1;
- (BOOL)canUseAutomaticSetup;
- (void)setCanUseAutomaticSetup:(BOOL)arg1;

@end

