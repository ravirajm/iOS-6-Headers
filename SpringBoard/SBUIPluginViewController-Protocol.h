/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol SBUIPluginViewController <NSObject>
- (void)viewDidRotateFromInterfaceOrientation:(int)arg1;
- (void)viewWillAnimateRotationToInterfaceOrientation:(int)arg1;
- (void)viewWillRotateToInterfaceOrientation:(int)arg1;
- (void)viewDidDisappear;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (id)view;

@optional
- (Class)popoverClass;
@end

