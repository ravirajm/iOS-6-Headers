/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "SBUIFullscreenAnimationView.h"

@class CALayer, CATransformLayer, SBApplication, UIView;

@interface SBAppToAppTransitionView : SBUIFullscreenAnimationView
{
    SBApplication *_toApplication;
    CATransformLayer *_transformLayer;
    CALayer *_startLayer;
    CALayer *_stopLayer;
    UIView *_fromView;
    UIView *_toView;
    int _orientation;
}

@property(nonatomic) int orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) SBApplication *toApp; // @synthesize toApp=_toApplication;
- (float)_rotationRadians;
- (id)_rotationValueFunction;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)endTransition;
- (void)beginTransition;
- (void)setToView:(id)arg1;
- (void)setFromView:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
