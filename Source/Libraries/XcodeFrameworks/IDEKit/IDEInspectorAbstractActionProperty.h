/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEKit/IDEInspectorProperty.h>

@class NSArray, NSString;

@interface IDEInspectorAbstractActionProperty : IDEInspectorProperty
{
    NSArray *menuItems;
    NSString *title;
}

+ (Class)propertyClassForPropertyDefinition:(id)arg1;
- (id)bindAndConfigure;
@property(copy) NSArray *menuItems; // @synthesize menuItems;
@property(copy) NSString *title; // @synthesize title;
- (id)staticMenuItems;

@end

