/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface CFPrefsSearchListSource : CFPrefsSource {
    struct __CFSet { } *_cloudKeys;
    CFPrefsCloudSource *_cloudSetTarget;
    struct __CFString { } *_identifier;
    struct _opaque_pthread_mutex_t { long x1; BOOL x2[40]; } *_searchListLock;
    struct __CFArray { } *_sourceList;
    CFPrefsPlistSource *_standardSetTarget;
    BOOL initialized;
}

+ (void)updateSearchListsForIdentifier:(struct __CFString { }*)arg1;
+ (void)with23930198HackSourceForIdentifier:(struct __CFString { }*)arg1 user:(struct __CFString { }*)arg2 byHost:(BOOL)arg3 container:(struct __CFString { }*)arg4 cloud:(BOOL)arg5 perform:(id /* block */)arg6;
+ (void)withSearchListForIdentifier:(struct __CFString { }*)arg1 container:(struct __CFString { }*)arg2 cloudConfigurationURL:(struct __CFURL { }*)arg3 perform:(id /* block */)arg4;
+ (void)withSnapshotSearchList:(id /* block */)arg1;
+ (void)withSuiteSearchListForIdentifier:(struct __CFString { }*)arg1 user:(struct __CFString { }*)arg2 locked:(BOOL)arg3 perform:(id /* block */)arg4;

- (void)addCloudSourceForIdentifier:(struct __CFString { }*)arg1 configurationPath:(struct __CFString { }*)arg2 storeName:(struct __CFString { }*)arg3 container:(struct __CFString { }*)arg4;
- (void)addCompatibilitySource;
- (void)addManagedSourceForIdentifier:(struct __CFString { }*)arg1 user:(struct __CFString { }*)arg2;
- (void)addNamedVolatileSourceForIdentifier:(struct __CFString { }*)arg1;
- (void)addPreferencesObserver:(id)arg1;
- (void)addSource:(id)arg1;
- (void)addSourceForIdentifier:(struct __CFString { }*)arg1 user:(struct __CFString { }*)arg2 byHost:(BOOL)arg3 container:(struct __CFString { }*)arg4;
- (void)addSuiteSourceForIdentifier:(struct __CFString { }*)arg1 user:(struct __CFString { }*)arg2;
- (struct __CFDictionary { }*)alreadylocked_copyDictionary;
- (struct __CFArray { }*)alreadylocked_copyKeyList;
- (void*)alreadylocked_copyValueForKey:(struct __CFString { }*)arg1;
- (BOOL)alreadylocked_requestNewData;
- (void)alreadylocked_setValues:(const void**)arg1 forKeys:(const struct __CFString {}**)arg2 count:(long)arg3;
- (void)asynchronouslyNotifyOfChangesFromDictionary:(struct __CFDictionary { }*)arg1 toDictionary:(struct __CFDictionary { }*)arg2;
- (struct __CFString { }*)copyCloudConfigurationWithURL:(struct __CFURL { }*)arg1 outConfigFileSource:(id*)arg2 outStoreName:(const struct __CFString {}**)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createRequestNewContentMessageForDaemon:(BOOL)arg1;
- (void)dealloc;
- (id)description;
- (struct __CFString { }*)domainIdentifier;
- (void)finalize;
- (void)freeze;
- (void)fullCloudSynchronizeWithCompletionHandler:(id /* block */)arg1;
- (long)generationCount;
- (long)generationCountFromListOfSources:(id*)arg1 count:(long)arg2;
- (void)handleReply:(id)arg1 toRequestNewDataMessage:(id)arg2 onConnection:(id)arg3 retryCount:(int)arg4 error:(BOOL*)arg5;
- (id)initWithIdentifier:(struct __CFString { }*)arg1;
- (void)lock;
- (void)removePreferencesObserver:(id)arg1;
- (void)removeSource:(id)arg1;
- (void)replaceSource:(id)arg1 withSource:(id)arg2;
- (void)setCloudEnabled:(BOOL)arg1 forKey:(struct __CFString { }*)arg2;
- (void)setObservingContents:(BOOL)arg1;
- (BOOL)synchronize;
- (void)unlock;

@end
