//
//  GNPaymentToken.h
//  GNApiSdk
//
//  Created by Thomaz Feitoza on 5/5/15.
//  Copyright (c) 2015 Gerencianet. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GNPaymentToken : NSObject

@property (strong, nonatomic, readonly) NSString *token;

- (instancetype) initWithJSON:(NSJSONSerialization *)json;

@end
