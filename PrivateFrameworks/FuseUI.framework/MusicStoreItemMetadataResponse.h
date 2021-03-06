/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicStoreItemMetadataResponse : NSObject <NSCopying> {
    BOOL _finalResponse;
    NSMutableDictionary *_itemIdentifierToStoreItemMetadata;
}

@property (getter=isFinalResponse, nonatomic) BOOL finalResponse;
@property (nonatomic, readonly, copy) NSArray *itemIdentifiers;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)isFinalResponse;
- (id)itemIdentifiers;
- (void)setFinalResponse:(BOOL)arg1;
- (void)setStoreItemMetadata:(id)arg1 forItemIdentifier:(id)arg2;
- (id)storeItemMetadataForItemIdentifier:(id)arg1;
- (id)storeItemMetadataForItemIdentifier:(id)arg1 returningIsFinalMetadata:(BOOL*)arg2;

@end
