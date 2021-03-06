/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEKit/IDEInspectorProperty.h>

@class IDEInspectorViewController, IDESourceControlStatusBubbleButton, NSButton, NSTextField;

@interface IDESourceControlInspectorStatusProperty : IDEInspectorProperty
{
    IDESourceControlStatusBubbleButton *_bubbleButton;
    NSTextField *_statusText;
    NSButton *_button;
    id <DVTObservingToken> _repaintToken;
}

- (void)addAction:(id)arg1;
- (id)initWithPropertyDefinition:(id)arg1 andController:(id)arg2;
@property(retain) IDEInspectorViewController *inspectorController;
- (void)loadView;
- (void)performSourceControlRequestOfType:(int)arg1;
- (void)resolveAction:(id)arg1;
- (void)revertAction:(id)arg1;
- (void)revertCommandAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)unignoreAction:(id)arg1;
- (void)updateForNewStatus;

@end

