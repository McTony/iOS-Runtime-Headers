/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@class NSObject<OS_dispatch_queue>;

@interface IMRemoteObjectBroadcaster : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)defaultBroadcaster;

- (id)_queue;
- (id)broadcastProxyForTarget:(id)arg1 protocol:(id)arg2;
- (id)broadcastProxyForTargets:(id)arg1 protocol:(id)arg2;
- (void)dealloc;
- (void)flushProxy:(id)arg1;
- (id)init;
- (BOOL)isSendQueueEmpty;

@end