/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LoginKit.framework/LoginKit
 */

@interface LKUser : UMMutableUser <NSSecureCoding> {
    NSString *_identifier;
    NSURL *_largeImageURL;
    NSDate *_lastOnlineAuth;
    NSURL *_mediumImageURL;
    NSMutableDictionary *_namingSimilarityInfoByClassID;
    NSString *_passwordType;
}

@property (retain) NSString *identifier;
@property (retain) NSURL *largeImageURL;
@property (retain) NSDate *lastOnlineAuth;
@property (retain) NSURL *mediumImageURL;
@property (retain) NSMutableDictionary *namingSimilarityInfoByClassID;
@property (retain) NSString *passwordType;

+ (BOOL)supportsSecureCoding;
+ (id)userFromDictionary:(id)arg1;
+ (id)userFromUMUser:(id)arg1;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToLKUser:(id)arg1;
- (id)largeImageURL;
- (id)lastOnlineAuth;
- (id)mediumImageURL;
- (id)namingSimilarityInfoByClassID;
- (id)passwordType;
- (void)setIdentifier:(id)arg1;
- (void)setLargeImageURL:(id)arg1;
- (void)setLastOnlineAuth:(id)arg1;
- (void)setMediumImageURL:(id)arg1;
- (void)setNamingSimilarityInfoByClassID:(id)arg1;
- (void)setPasswordType:(id)arg1;

@end
