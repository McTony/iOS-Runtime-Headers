/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SocialDaemon.framework/SocialDaemon
 */

@class XPCProxy, <SLDServiceDelegate>, NSManagedObjectContext;

@interface SLDSession : NSObject <XPCProxyTarget, SLRemoteSession> {
    Class _remoteClass;
    XPCProxy *_clientProxy;
    NSManagedObjectContext *_managedObjectContext;
    <SLDServiceDelegate> *_serviceDelegate;
}

@property(retain) XPCProxy * clientProxy;
@property(readonly) Class remoteClass;


- (void).cxx_destruct;
- (id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2;
- (id)_bundleIdForPID:(int)arg1;
- (id)clientBundleId;
- (BOOL)clientHasEntitlement:(id)arg1;
- (id)initWithRemoteClass:(id)arg1 managedObjectContext:(id)arg2;
- (id)localizedAppNameForPID:(int)arg1;
- (id)localizedAppNameClient;
- (id)whitelistedClassNamesForDecoding;
- (Class)remoteClass;
- (id)clientProxy;
- (void)setClientProxy:(id)arg1;
- (void)setupWithService:(id)arg1 connection:(id)arg2;

@end