/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSArray, NSDictionary, NSString;

@interface PLPhotoEditModel : NSObject <NSCopying> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    NSArray *_autoRedEyeCorrections;
    NSString *_autoSmartColorIdentifier;
    double _autoSmartColorLevel;
    NSString *_autoSmartToneIdentifier;
    double _autoSmartToneLevel;
    NSString *_autoWhiteBalanceIdentifier;
    NSDictionary *_autoWhiteBalanceSettings;
    double _blackPointLevelOffset;
    double _brightnessLevelOffset;
    double _bwGrainLevelOffset;
    double _bwHueLevelOffset;
    double _bwNeutralGammaLevelOffset;
    double _bwStrengthLevelOffset;
    double _bwToneLevelOffset;
    double _colorCastLevelOffset;
    double _colorContrastLevelOffset;
    double _colorVibrancyLevelOffset;
    double _contrastLevelOffset;
    long long _cropConstraintHeight;
    long long _cropConstraintWidth;
    NSString *_effectFilterName;
    long long _effectFilterVersion;
    double _exposureLevelOffset;
    double _highlightsLevelOffset;
    NSArray *_legacyAutoEnhanceFilters;
    } _normalizedCropRect;
    NSArray *_redEyeCorrections;
    unsigned long long _rotation;
    double _shadowsLevelOffset;
    double _smartBWLevel;
    NSDictionary *_smartBWStatistics;
    double _smartColorLevel;
    NSDictionary *_smartColorStatistics;
    double _smartToneLevel;
    NSDictionary *_smartToneStatistics;
    double _straightenAngle;
    double _whiteBalanceFaceI;
    double _whiteBalanceFaceQ;
    double _whiteBalanceFaceStrength;
    double _whiteBalanceFaceWarmth;
    bool_legacyAutoEnhanceIsOn;
    bool_smartBWEnabled;
    bool_smartColorEnabled;
    bool_smartToneEnabled;
    bool_whiteBalanceEnabled;
}

@property(copy,readonly) NSArray * autoRedEyeCorrections;
@property(copy,readonly) NSString * autoSmartColorIdentifier;
@property(readonly) double autoSmartColorLevel;
@property(copy,readonly) NSString * autoSmartToneIdentifier;
@property(readonly) double autoSmartToneLevel;
@property(copy,readonly) NSString * autoWhiteBalanceIdentifier;
@property(copy,readonly) NSDictionary * autoWhiteBalanceSettings;
@property(readonly) double blackPointLevelOffset;
@property(readonly) double brightnessLevelOffset;
@property(readonly) double bwGrainLevelOffset;
@property(readonly) double bwHueLevelOffset;
@property(readonly) double bwNeutralGammaLevelOffset;
@property(readonly) double bwStrengthLevelOffset;
@property(readonly) double bwToneLevelOffset;
@property(readonly) double colorCastLevelOffset;
@property(readonly) double colorContrastLevelOffset;
@property(readonly) double colorVibrancyLevelOffset;
@property(readonly) double contrastLevelOffset;
@property(readonly) long long cropConstraintHeight;
@property(readonly) long long cropConstraintWidth;
@property(copy,readonly) NSString * effectFilterName;
@property(readonly) long long effectFilterVersion;
@property(readonly) double exposureLevelOffset;
@property(readonly) bool hasIdentityCrop;
@property(readonly) double highlightsLevelOffset;
@property(copy,readonly) NSArray * legacyAutoEnhanceFilters;
@property(readonly) bool legacyAutoEnhanceIsOn;
@property(readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } normalizedCropRect;
@property(copy,readonly) NSArray * redEyeCorrections;
@property(readonly) unsigned long long rotation;
@property(readonly) double shadowsLevelOffset;
@property(getter=isSmartBWEnabled,readonly) bool smartBWEnabled;
@property(readonly) double smartBWLevel;
@property(copy,readonly) NSDictionary * smartBWStatistics;
@property(getter=isSmartColorEnabled,readonly) bool smartColorEnabled;
@property(readonly) double smartColorLevel;
@property(copy,readonly) NSDictionary * smartColorStatistics;
@property(getter=isSmartToneEnabled,readonly) bool smartToneEnabled;
@property(readonly) double smartToneLevel;
@property(copy,readonly) NSDictionary * smartToneStatistics;
@property(readonly) double straightenAngle;
@property(getter=isWhiteBalanceEnabled,readonly) bool whiteBalanceEnabled;
@property(readonly) double whiteBalanceFaceI;
@property(readonly) double whiteBalanceFaceQ;
@property(readonly) double whiteBalanceFaceStrength;
@property(readonly) double whiteBalanceFaceWarmth;

+ (id)_identityModel;
+ (void)_loadReferenceLevelsFromCIFilterWithName:(id)arg1 attributeKeys:(id)arg2 intoLevelStructs:(struct { /* ? */ }**)arg3;
+ (void)_loadSubfilterReferenceLevelsIfNeeded;
+ (double)_referenceValueOfType:(long long)arg1 fromLevels:(struct { double x1; double x2; double x3; })arg2;
+ (double)angleForRotation:(unsigned long long)arg1;
+ (long long)identityCropConstraint;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })identityNormalizedCropRect;
+ (int)identityOrientation;
+ (unsigned long long)identityRotation;
+ (double)referenceBWGrainLevelOfType:(long long)arg1;
+ (double)referenceBWHueLevelOfType:(long long)arg1;
+ (double)referenceBWNeutralGammaLevelOfType:(long long)arg1;
+ (double)referenceBWStrengthLevelOfType:(long long)arg1;
+ (double)referenceBWToneLevelOfType:(long long)arg1;
+ (double)referenceBlackPointLevelOfType:(long long)arg1;
+ (double)referenceBrightnessLevelOfType:(long long)arg1;
+ (double)referenceColorCastLevelOfType:(long long)arg1;
+ (double)referenceColorContrastLevelOfType:(long long)arg1;
+ (double)referenceColorVibrancyLevelOfType:(long long)arg1;
+ (double)referenceContrastLevelOfType:(long long)arg1;
+ (double)referenceExposureLevelOfType:(long long)arg1;
+ (double)referenceHighlightsLevelOfType:(long long)arg1;
+ (double)referenceShadowsLevelOfType:(long long)arg1;
+ (double)referenceSmartBWLevelOfType:(long long)arg1;
+ (double)referenceSmartColorLevelOfType:(long long)arg1;
+ (double)referenceSmartToneLevelOfType:(long long)arg1;
+ (double)referenceStraightenAngleOfType:(long long)arg1;
+ (double)referenceWhiteBalanceFaceILevelOfType:(long long)arg1;
+ (double)referenceWhiteBalanceFaceQLevelOfType:(long long)arg1;
+ (double)referenceWhiteBalanceFaceStrengthLevelOfType:(long long)arg1;
+ (double)referenceWhiteBalanceFaceWarmthLevelOfType:(long long)arg1;

- (void)_copyValuesFromModel:(id)arg1 interpolationStartModel:(id)arg2 progress:(double)arg3;
- (id)_debugDictionaryRepresentation;
- (id)autoRedEyeCorrections;
- (id)autoSmartColorIdentifier;
- (double)autoSmartColorLevel;
- (id)autoSmartToneIdentifier;
- (double)autoSmartToneLevel;
- (id)autoWhiteBalanceIdentifier;
- (id)autoWhiteBalanceSettings;
- (double)blackPointLevelOffset;
- (double)brightnessLevelOffset;
- (double)bwGrainLevelOffset;
- (double)bwHueLevelOffset;
- (double)bwNeutralGammaLevelOffset;
- (double)bwStrengthLevelOffset;
- (double)bwToneLevelOffset;
- (double)colorCastLevelOffset;
- (double)colorContrastLevelOffset;
- (double)colorVibrancyLevelOffset;
- (double)contrastLevelOffset;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)cropConstraintHeight;
- (long long)cropConstraintWidth;
- (void)dealloc;
- (id)description;
- (id)effectFilterName;
- (long long)effectFilterVersion;
- (double)exposureLevelOffset;
- (bool)hasIdentityCrop;
- (double)highlightsLevelOffset;
- (id)init;
- (bool)isEqualToPhotoEditModel:(id)arg1;
- (bool)isGeometryEqualToPhotoEditModel:(id)arg1;
- (bool)isGeometryIdentity;
- (bool)isIdentityModel;
- (bool)isSmartBWEnabled;
- (bool)isSmartColorEnabled;
- (bool)isSmartToneEnabled;
- (bool)isVisuallyEqualToPhotoEditModel:(id)arg1;
- (bool)isWhiteBalanceEnabled;
- (id)legacyAutoEnhanceFilters;
- (bool)legacyAutoEnhanceIsOn;
- (id)mutableCopy;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })normalizedCropRect;
- (id)redEyeCorrections;
- (unsigned long long)rotation;
- (double)shadowsLevelOffset;
- (double)smartBWLevel;
- (id)smartBWStatistics;
- (double)smartColorLevel;
- (id)smartColorStatistics;
- (double)smartToneLevel;
- (id)smartToneStatistics;
- (double)straightenAngle;
- (double)whiteBalanceFaceI;
- (double)whiteBalanceFaceQ;
- (double)whiteBalanceFaceStrength;
- (double)whiteBalanceFaceWarmth;

@end