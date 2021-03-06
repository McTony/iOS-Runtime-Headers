/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPinchedTileTracker : PUInteractiveTileTracker {
    PUVelocityFilter *__angularVelocityFilter;
    PUVelocityFilter *__horizontalVelocityFilter;
    PUTileLayoutInfo *__initialLayoutInfo;
    PUChangeDirectionValueFilter *__pinchGestureRecognizerScaleDirectionValueFilter;
    float __pinchProgress;
    PUPinchTracker *__pinchTracker;
    PUTileLayoutInfo *__targetLayoutInfo;
    PUVelocityFilter *__verticalVelocityFilter;
    struct { 
        BOOL respondsToInitialAspectRatioForTileWithLayoutInfo; 
        BOOL respondsToFinalLayoutInfoForTileWithLayoutInfo; 
    } _delegateFlags;
    int _direction;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
}

@property (setter=_setAngularVelocityFilter:, nonatomic, retain) PUVelocityFilter *_angularVelocityFilter;
@property (setter=_setHorizontalVelocityFilter:, nonatomic, retain) PUVelocityFilter *_horizontalVelocityFilter;
@property (setter=_setInitialLayoutInfo:, nonatomic, retain) PUTileLayoutInfo *_initialLayoutInfo;
@property (setter=_setPinchGestureRecognizerScaleDirectionValueFilter:, nonatomic, retain) PUChangeDirectionValueFilter *_pinchGestureRecognizerScaleDirectionValueFilter;
@property (setter=_setPinchProgress:, nonatomic) float _pinchProgress;
@property (setter=_setPinchTracker:, nonatomic, retain) PUPinchTracker *_pinchTracker;
@property (setter=_setTargetLayoutInfo:, nonatomic, retain) PUTileLayoutInfo *_targetLayoutInfo;
@property (setter=_setVerticalVelocityFilter:, nonatomic, retain) PUVelocityFilter *_verticalVelocityFilter;
@property (nonatomic, readonly) int direction;
@property (nonatomic, readonly) UIPinchGestureRecognizer *pinchGestureRecognizer;

- (void).cxx_destruct;
- (id)_angularVelocityFilter;
- (id)_horizontalVelocityFilter;
- (id)_initialLayoutInfo;
- (id)_pinchGestureRecognizerScaleDirectionValueFilter;
- (float)_pinchProgress;
- (id)_pinchTracker;
- (void)_setAngularVelocityFilter:(id)arg1;
- (void)_setHorizontalVelocityFilter:(id)arg1;
- (void)_setInitialLayoutInfo:(id)arg1;
- (void)_setPinchGestureRecognizerScaleDirectionValueFilter:(id)arg1;
- (void)_setPinchProgress:(float)arg1;
- (void)_setPinchTracker:(id)arg1;
- (void)_setTargetLayoutInfo:(id)arg1;
- (void)_setVerticalVelocityFilter:(id)arg1;
- (id)_targetLayoutInfo;
- (void)_updateTargetLayoutInfoIfNeeded;
- (id)_verticalVelocityFilter;
- (void)completeTracking;
- (void)configureTileReattachmentContext:(id)arg1;
- (int)direction;
- (id)initWithPinchGestureRecognizer:(id)arg1 tilingView:(id)arg2 direction:(int)arg3;
- (id)initWithTilingView:(id)arg1;
- (id)pinchGestureRecognizer;
- (void)setDelegate:(id)arg1;
- (void)startTileControllerTracking;
- (id)tileControllerToTrack;
- (void)updateGestureRecognizerTracking;
- (void)updateTileControllerTracking;

@end
