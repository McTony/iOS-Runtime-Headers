/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISForcePlayrateInput : ISGestureInput {
    BOOL __active;
    ISDisplayLink *__displayLink;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _cachedDurationCMTime;
    double _lastUpdate;
    float _smoothedVelocity;
}

@property (setter=_setActive:, nonatomic) BOOL _active;
@property (setter=_setDisplayLink:, nonatomic, retain) ISDisplayLink *_displayLink;

- (void).cxx_destruct;
- (BOOL)_active;
- (id)_displayLink;
- (void)_handlePress:(id)arg1;
- (void)_handleUpdate;
- (BOOL)_isTouching;
- (void)_setActive:(BOOL)arg1;
- (void)_setDisplayLink:(id)arg1;
- (id)init;
- (int)inputType;
- (id)newGestureRecognizer;
- (void)playerDidChange;

@end
