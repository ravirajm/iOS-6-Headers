/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "UIImage.h"

#import "SBCountedMapValue-Protocol.h"

@class NSString;

@interface SBIconAccessoryImage : UIImage <SBCountedMapValue>
{
    NSString *_text;
}

+ (void)checkinAccessoryImage:(id)arg1;
+ (id)checkoutAccessoryImageOfType:(int)arg1 withText:(id)arg2;
+ (Class)_imageClassForAccessoryType:(int)arg1;
+ (id)_accessoryImageCountedMap;
+ (id)textForCountedMapKey:(id)arg1;
+ (id)countedMapKeyForText:(id)arg1;
+ (id)creationBlockForText:(SEL)arg1;
@property(readonly, nonatomic) NSString *text; // @synthesize text=_text;
- (struct CGRect)accessoryFrameForIconBounds:(struct CGRect)arg1;
@property(readonly, nonatomic) id <NSCopying> countedMapKey;

@end

