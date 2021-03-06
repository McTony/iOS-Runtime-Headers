/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCoreRoutineStateModelConfidence : PBCodable <NSCopying> {
    unsigned int _confidence;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int confidence : 1; 
        unsigned int impossibleTransitions : 1; 
        unsigned int nearbyLocations : 1; 
    } _has;
    unsigned int _impossibleTransitions;
    unsigned int _nearbyLocations;
    unsigned long long _timestamp;
}

@property (nonatomic) unsigned int confidence;
@property (nonatomic) BOOL hasConfidence;
@property (nonatomic) BOOL hasImpossibleTransitions;
@property (nonatomic) BOOL hasNearbyLocations;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned int impossibleTransitions;
@property (nonatomic) unsigned int nearbyLocations;
@property (nonatomic) unsigned long long timestamp;

- (unsigned int)confidence;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasConfidence;
- (BOOL)hasImpossibleTransitions;
- (BOOL)hasNearbyLocations;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (unsigned int)impossibleTransitions;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)nearbyLocations;
- (BOOL)readFrom:(id)arg1;
- (void)setConfidence:(unsigned int)arg1;
- (void)setHasConfidence:(BOOL)arg1;
- (void)setHasImpossibleTransitions:(BOOL)arg1;
- (void)setHasNearbyLocations:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setImpossibleTransitions:(unsigned int)arg1;
- (void)setNearbyLocations:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
