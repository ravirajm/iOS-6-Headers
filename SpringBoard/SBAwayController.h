/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "SBAlert.h"

#import "SBShowcaseControllerOwner-Protocol.h"
#import "SBSlidingAlertDisplayDelegate-Protocol.h"

@class NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, PLCameraPageController, SBAlertItem, SBApplication, SBAwayBulletinListController, SBAwayView, SBDeviceLockDisableAssertion, SBShowcaseController, SBUIController, UIImageView, UIView, _UIDynamicValueAnimation;

@interface SBAwayController : SBAlert <SBSlidingAlertDisplayDelegate, SBShowcaseControllerOwner>
{
    SBUIController *_uiController;
    SBShowcaseController *_showcaseController;
    SBAwayView *_awayView;
    unsigned int _isActive:1;
    unsigned int _isLocked:1;
    unsigned int _isUnlocking:1;
    unsigned int _isActivatingBacklightForUnlock:1;
    unsigned int _isDimmed:1;
    unsigned int _isDimming:1;
    unsigned int _orderedOutDimmed:1;
    unsigned int _frontDimmed:1;
    unsigned int _makingEmergencyCall:1;
    unsigned int _appRequestedPasscodeEntry:1;
    unsigned int _relockAfterUnlock:1;
    unsigned int _showOverheatUI:1;
    unsigned int _performingAutoUnlock:1;
    unsigned int _validPhotoCountCheck:1;
    unsigned int _showcaseAnimating:1;
    unsigned int _hasBeenLockedOnce:1;
    unsigned int _isInLostMode:1;
    unsigned int _animatingDeactivation:1;
    int _unlockSource;
    NSDictionary *_nowPlayingInfo;
    SBApplication *_nowPlayingApp;
    id <SBDeviceLockViewOwner> _deviceUnlockDisplay;
    BOOL _chargingViewHasFadedOut;
    NSMutableArray *_pendingAlertItems;
    NSMutableArray *_pendingSuperModalAlertItems;
    SBAlertItem *_currentAlertItem;
    SBAwayBulletinListController *_savedBulletinController;
    NSMutableDictionary *_awayViewPluginControllers;
    NSString *_alwaysFullscreenAwayPluginName;
    NSMutableArray *_lockScreenBundlesToDisableAfterUnlock;
    BOOL _cameraModeActive;
    BOOL _cameraVisible;
    BOOL _animatingCameraIn;
    _UIDynamicValueAnimation *_dynamicCameraAnimation;
    BOOL _cancelCameraAnimation;
    PLCameraPageController *_cameraViewController;
    UIImageView *_cameraDefaultImageView;
    UIView *_cameraBackgroundView;
    UIView *_cameraContainerView;
    UIView *_cameraSlidingContainerView;
    UIView *_cameraFakeStatusBar;
    UIView *_cameraShadowView;
    BOOL _dimTimerDisabledForCamera;
    NSDate *_lastCameraSessionID;
    BOOL _exitedCameraForAlert;
    BOOL _restartCameraAfterCall;
    BOOL _disableGracePeriodForCamera;
    SBDeviceLockDisableAssertion *_disableGracePeriodForCameraAssertion;
    SBDeviceLockDisableAssertion *_disableDeviceLockWhileUnlockedAssertion;
    NSObject<OS_dispatch_queue> *_prewarmQueue;
    int _gracePeriodWhenLocked;
    BOOL _keepBulletinsUnreadOnUnlock;
    NSString *_currentTestName;
    BOOL _sbFinishedLaunching;
}

+ (void)registerForAlerts;
+ (id)sharedAwayControllerIfExists;
+ (id)sharedAwayController;
@property(retain, nonatomic) NSString *currentTestName; // @synthesize currentTestName=_currentTestName;
@property(retain, nonatomic) SBShowcaseController *showcaseController; // @synthesize showcaseController=_showcaseController;
@property(nonatomic) BOOL chargingViewHasFadedOut; // @synthesize chargingViewHasFadedOut=_chargingViewHasFadedOut;
- (void)runUnlockTest:(id)arg1 options:(id)arg2;
- (void)_irisOpened;
- (void)slidingAlertViewDeactivationAnimationCompleted:(id)arg1;
- (void)slidingAlertViewDeactivationAnimationStart:(id)arg1;
- (void)willAnimateToggleDeviceLockWithStyle:(int)arg1 toVisibility:(BOOL)arg2 withDuration:(double)arg3;
- (void)showcase:(id)arg1 didTransferOwnershipToOwner:(id)arg2;
- (void)assumeShowcaseOwnership:(id)arg1;
- (void)showcaseWantsToBeDismissed:(id)arg1 animated:(BOOL)arg2;
- (void)showcase:(id)arg1 updateRevealMode:(int)arg2 withBlock:(id)arg3;
- (BOOL)presentShowcaseViewController:(id)arg1 revealMode:(int)arg2 completion:(id)arg3;
- (void)_adjustViewHierarchyForShowcase:(id)arg1 revealAmount:(float)arg2;
- (float)showcaseWindowLevel:(id)arg1;
- (void)_sendToDeviceLockOwnerAnimateToEmergencyCall;
- (BOOL)_sendToDeviceLockOwnerShouldUseTransparentStatusBar;
- (BOOL)_sendToDeviceLockOwnerIsDisplayingErrorStatus;
- (void)_sendToDeviceLockOwnerDeviceUnlockFailed;
- (void)_sendToDeviceLockOwnerDeviceUnlockSucceeded;
- (void)_sendToDeviceLockOwnerSetShowingDeviceLock:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_sendToDeviceLockOwnerSetShowingDeviceLock:(BOOL)arg1;
- (void)updateLockSlider;
- (void)stopLockSliderAnimations;
- (void)startLockSliderAnimations;
- (void)updateInterfaceIfNecessary;
- (void)unlockAlwaysFullscreenAwayView;
- (void)enableAlwaysFullscreenAwayPlugin;
- (BOOL)isAlwaysFullscreenAwayPluginEnabled;
- (void)setAlwaysFullscreenAwayPluginName:(id)arg1;
- (BOOL)handleHeadsetButtonPressed:(BOOL)arg1;
- (BOOL)handleVolumeDownButtonPressed;
- (BOOL)handleVolumeUpButtonPressed;
- (BOOL)handleLockButtonPressed;
- (BOOL)handleSlideshowHardwareButton;
- (void)hardwareKeyboardAvailabilityChanged;
- (BOOL)handleMenuButtonHeld;
- (BOOL)handleMenuButtonDoubleTap;
- (BOOL)handleMenuButtonTap;
- (struct CGRect)defaultContentRegionForPluginController:(id)arg1 withOrientation:(int)arg2;
- (BOOL)awayPluginControllerShouldAnimateOthersResumption;
- (void)pluginFullscreenNotification:(id)arg1;
- (void)disablePluginContainerNotification:(id)arg1;
- (void)_awayViewFinishedAnimatingOut:(id)arg1;
- (void)_disablePluginControllersForUnlock;
- (void)_disablePluginControllersForLock;
- (void)pluginVisiblityStateChanged:(id)arg1;
- (void)disableLockScreenBundleWithName:(id)arg1 deactivationContext:(id)arg2;
- (void)disableLockScreenBundleWithName:(id)arg1;
- (void)enableLockScreenBundleWithName:(id)arg1;
- (void)enableLockScreenBundleWithName:(id)arg1 activationContext:(id)arg2;
- (id)nameOfPluginController:(id)arg1;
- (id)interfaceControllingAwayPluginController;
- (id)activeAwayPluginController;
- (id)highestPriorityAwayPluginController;
- (BOOL)isAwayPluginViewVisible;
- (BOOL)isInLostMode;
- (void)exitLostModeIfNecessary;
- (void)activateLostModeForRemoteLock:(BOOL)arg1;
- (void)toggleShowsIMEIandICCID:(id)arg1;
- (BOOL)toggleMediaControls;
- (void)hideMediaControls;
- (BOOL)isShowingMediaControls;
- (void)_batteryStatusChanged;
- (BOOL)shouldShowInCallUI;
- (void)updateInCallUI;
- (void)updateCardItem:(id)arg1;
- (void)deactivateCardItem:(id)arg1;
- (void)activateCardItem:(id)arg1 animated:(BOOL)arg2;
- (void)deactivateAlertItem:(id)arg1;
- (BOOL)wantsToHandleAlert:(id)arg1;
- (BOOL)activateAlertItem:(id)arg1;
- (void)noteAlertSheetWasReplaced:(id)arg1 withAlertSheet:(id)arg2;
- (void)pendOrDeactivateCurrentAlertItem;
- (id)currentAlertItem;
- (void)didAnimateLockKeypadOut;
- (void)didAnimateLockKeypadIn;
- (void)cleanupUIForAssistantPopoverDismissalAnimated:(BOOL)arg1;
- (void)updateUIForAssistantPopoverRotationToOrientation:(int)arg1 withDuration:(double)arg2;
- (void)prepareUIForAssistantPopoverWithCompletion:(id)arg1;
- (BOOL)isMakingEmergencyCall;
- (void)emergencyCallWasRemoved;
- (void)emergencyCallWasDisplayed;
- (void)makeEmergencyCall;
- (void)handleRequestedAlbumArt:(id)arg1;
- (void)_iapExtendedModeChanged:(id)arg1;
- (void)_nowPlayingStateChanged:(id)arg1;
- (void)_nowPlayingAppChanged:(id)arg1;
- (void)updateAwayViewNowPlayingInfo;
- (void)updateNowPlayingInfo:(id)arg1 app:(id)arg2;
- (void)didFinishAnimatingOut;
- (void)orderOut;
- (int)statusBarStyleOverridesToCancel;
- (int)statusBarStyle;
- (int)effectiveStatusBarStyle;
- (BOOL)allowsStackingOfAlert:(id)arg1;
- (void)deactivate;
- (void)animateDeactivation;
- (BOOL)currentlyAnimatingDeactivation;
- (void)activate;
- (BOOL)handleKeyEvent:(struct __GSEvent *)arg1;
- (void)userEventsDidIdle;
- (void)userEventPresenceTimerExpired;
- (void)userEventOccurred;
- (void)updateOrientationForUndim;
- (void)undimScreen;
- (int)interfaceOrientationForActivation;
- (void)dimScreen:(BOOL)arg1;
- (void)preventIdleSleepForNumberOfSeconds:(float)arg1;
- (void)preventIdleSleep;
- (void)allowIdleSleep;
- (void)relockForButtonPress:(BOOL)arg1 afterCall:(BOOL)arg2 dimmed:(BOOL)arg3;
- (void)relockForButtonPress:(BOOL)arg1 afterCall:(BOOL)arg2;
- (void)_dimTimerFired;
- (void)finishedDimmingScreen;
- (BOOL)isDimmed;
- (void)_restartDimTimer:(float)arg1 mode:(int)arg2;
- (void)restartDimTimer:(float)arg1;
- (void)restartDimTimer;
- (void)cancelDimTimer;
- (BOOL)attemptDeviceUnlockWithPassword:(id)arg1 lockViewOwner:(id)arg2;
- (double)_undimInterval;
- (id)restoreFromSavedBulletinController;
- (BOOL)awayBulletinControllerIsActive;
- (id)activeOrPendingBulletinController;
- (void)cleanupFromPhoneCallIfNeeded;
- (void)prepareToReturnToCameraFromCall;
- (BOOL)shouldReturnToCameraAfterCall;
- (void)cancelReturnToCameraAfterCall;
- (void)noteStartingPhoneCallWhileLocked;
- (void)_finishedUnlockAttemptWithStatus:(BOOL)arg1;
- (BOOL)isActivatingBacklightForUnlock;
- (BOOL)isLockedAndInactive;
- (BOOL)isLockedAndUndimmed;
- (BOOL)_isAccessoryActive;
- (void)attemptUnlock;
- (void)attemptUnlockFromSource:(int)arg1;
- (void)frontLocked:(BOOL)arg1 animate:(BOOL)arg2 automatically:(BOOL)arg3;
- (void)remoteLock;
- (void)_lockFeaturesForRemoteLock:(BOOL)arg1;
- (void)frontLocked:(BOOL)arg1 withAnimation:(int)arg2 automatically:(BOOL)arg3 disableLockSound:(BOOL)arg4;
- (id)activationBlockWithAnimation:(SEL)arg1;
- (void)printLockLog;
- (BOOL)shouldAnimateOtherDisplaysResumption;
- (BOOL)shouldAnimateOtherDisplaysSuspension;
- (void)frontLockedAnimationFinished;
- (void)lockBarStoppedTracking:(id)arg1;
- (void)lockBarStartedTracking:(id)arg1;
- (BOOL)shouldShowSlideshowButton;
- (BOOL)hasPhotosDevicesAttached;
- (BOOL)deviceHasPhotos;
- (void)_photoLibraryChanged;
- (void)_awayInCallControllerDidToggleShowingInCallInfo:(id)arg1;
- (BOOL)shouldShowLockStatusBarTime;
- (BOOL)isLocked;
- (void)noteResetRestoreStateChanged;
- (double)idleDimDuration;
- (void)cancelApplicationRequestedDeviceLockEntry;
- (void)applicationRequestedDeviceUnlock;
- (void)activationChanged:(id)arg1;
- (void)unlockWithSound:(BOOL)arg1;
- (void)unlockWithSound:(BOOL)arg1 bypassPinLock:(BOOL)arg2;
- (void)unlockWithSound:(BOOL)arg1 unlockSource:(int)arg2;
- (void)_unlockWithSound:(BOOL)arg1 unlockSource:(int)arg2 isAutoUnlock:(BOOL)arg3 bypassPinLock:(BOOL)arg4;
- (void)_attemptUnlockWithSound:(BOOL)arg1 unlockSource:(int)arg2 isAutoUnlock:(BOOL)arg3 lockOwner:(id)arg4 bypassPinLock:(BOOL)arg5;
- (void)screensaverDidFadeToBlack:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)_finishUnlockWithSound:(BOOL)arg1 unlockSource:(int)arg2 isAutoUnlock:(BOOL)arg3;
- (BOOL)performingAutoUnlock;
- (void)showTestBulletin;
- (void)_idleTimerDisabledReasonsChanged:(id)arg1;
- (void)_deviceLockedChanged:(id)arg1;
- (void)_deviceBlockedChanged:(id)arg1;
- (id)allPendingAlertItems;
- (void)lock;
- (void)setLocked:(BOOL)arg1;
- (void)_pendAlertItem:(id)arg1;
- (void)setShowOverheatUI:(BOOL)arg1;
- (BOOL)showOverheatUI;
- (void)_sendLockStateChangedNotification;
- (void)playLockSound;
- (void)reactivatePendingAlertItems:(BOOL)arg1;
- (void)reactivatePendingAlertItemsWithBulletinController:(id)arg1 forUnlock:(BOOL)arg2;
- (void)_reactivateSuperModalAlertsIfNecessary;
- (BOOL)hasSuperModalAlertItems;
- (id)dequeueAllPendingSuperModalAlertItems;
- (void)_releaseAwayView;
- (void)_blockingViewHit:(id)arg1;
- (void)_dismissShowcase;
- (void)_dismissShowcaseImmediately;
- (void)_finishDismissShowcase;
- (BOOL)expectsFaceContact;
- (BOOL)_activateShowcase:(id)arg1 revealMode:(int)arg2;
- (void)takePicture;
- (BOOL)cameraIsInPreviewMode;
- (BOOL)cameraIsVisible;
- (BOOL)cameraIsActive;
- (void)tearDownCameraUIImmediately;
- (void)_restoreWindowOrientationAndDelegate;
- (void)_setCameraAsWindowDelegate;
- (void)dismissCameraAnimated:(BOOL)arg1;
- (void)handleDismissCameraSystemGesture:(id)arg1;
- (BOOL)allowDismissCameraSystemGesture;
- (void)_tearDownCameraPreview;
- (void)_removeCameraPreviewViews;
- (void)_activateCameraAfterCall;
- (void)activateCamera;
- (void)setDisableGracePeriodForCamera:(BOOL)arg1;
- (void)activateCameraWithNewSessionID:(BOOL)arg1 afterCall:(BOOL)arg2;
- (void)_createCameraViewControllerWithOldSessionID;
- (void)_createCameraViewControllerWithNewSessionID;
- (void)_createCameraViewControllerWithNewSessionID:(BOOL)arg1 andStartPreview:(BOOL)arg2;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)handleCameraTapGesture:(id)arg1;
- (void)handleCameraPanGesture:(id)arg1;
- (void)_handleCameraPanGestureEndedWithVelocity:(float)arg1;
- (id)_newDynamicAnimationForCameraStart:(BOOL)arg1 targetValue:(double)arg2 withInitialVelocity:(double)arg3;
- (void)_translateSlidingViewByY:(float)arg1;
- (void)_setupCameraSlideDownAnimation;
- (void)_cleanupFromCanceledCameraDismissGesture;
- (void)_cleanupFromCameraPanGesture;
- (void)_setupCameraSlideUpAnimation;
- (id)awayViewSnapshot;
- (void)removeAwayViewFakeStatusBar;
- (id)awayViewFakeStatusBar;
- (void)_cancelCameraPrewarm;
- (void)_prewarmCamera;
- (void)alertDisplayWillBecomeVisible;
- (id)alertDisplayViewWithSize:(struct CGSize)arg1;
- (id)awayView;
- (BOOL)undimsDisplay;
- (float)finalAlpha;
- (BOOL)showsSpringBoardStatusBar;
- (struct CGRect)alertWindowRect;
- (id)initWithUIController:(id)arg1;
@property(readonly) BOOL hasEverBeenLocked;

@end

