/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEKit/IDESourceControlOperationInfo.h>

@class IDESourceControlBranch, NSMutableDictionary, NSString;

@interface IDESourceControlMergeOperationInfo : IDESourceControlOperationInfo
{
    IDESourceControlBranch *_mergeBranch;
    NSString *_currentRevisionIdentifier;
    NSString *_branchRevisionIdentifier;
    NSString *_ancestorRevisionIdentifier;
    NSString *_remoteURLToMerge;
    NSMutableDictionary *_itemsWithConflicts;
}

@property(copy) NSString *ancestorRevisionIdentifier; // @synthesize ancestorRevisionIdentifier=_ancestorRevisionIdentifier;
@property(copy) NSString *branchRevisionIdentifier; // @synthesize branchRevisionIdentifier=_branchRevisionIdentifier;
@property(readonly) unsigned long long conflictCount;
@property(copy) NSString *currentRevisionIdentifier; // @synthesize currentRevisionIdentifier=_currentRevisionIdentifier;
@property(readonly) NSMutableDictionary *itemsWithConflicts; // @synthesize itemsWithConflicts=_itemsWithConflicts;
@property IDESourceControlBranch *mergeBranch; // @synthesize mergeBranch=_mergeBranch;
- (id)processDistributedMergeInfoWithProgressBlock:(id)arg1 isSingleOperation:(void)arg2 completionBlock:(BOOL)arg3;
- (id)processInfoWithProgressBlock:(id)arg1 isSingleOperation:(void)arg2 completionBlock:(BOOL)arg3;
- (id)processMergeInfoWithProgressBlock:(id)arg1 isSingleOperation:(void)arg2 completionBlock:(BOOL)arg3;
@property(readonly) NSString *remoteURLToMerge; // @synthesize remoteURLToMerge=_remoteURLToMerge;

@end

