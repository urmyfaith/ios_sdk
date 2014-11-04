//
//  AIAttribution.h
//  adjust
//
//  Created by Pedro Filipe on 29/10/14.
//  Copyright (c) 2014 adjust GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AIAttribution : NSObject <NSCoding>

// the following attributes are only set when error is nil
// (when activity was tracked successfully and response could be parsed)

// tracker token of current device
@property (nonatomic, copy) NSString *trackerToken;

// tracker name of current device
@property (nonatomic, copy) NSString *trackerName;

// tracker network
@property (nonatomic, copy) NSString *network;

// tracker campaign
@property (nonatomic, copy) NSString *campaign;

// tracker adgroup
@property (nonatomic, copy) NSString *adgroup;

// tracker creative
@property (nonatomic, copy) NSString *creative;

@property (nonatomic, assign) BOOL finalAttribution;

- (BOOL)isEqualToAttribution:(AIAttribution *)attribution;

+ (AIAttribution *)dataWithJsonDict:(NSDictionary *)jsonDict;
- (id)initWithJsonDict:(NSDictionary *)jsonDict;
- (NSDictionary *)dictionary;

@end
