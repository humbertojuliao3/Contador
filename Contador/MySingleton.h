//
//  MySingleton.h
//  ContaPessoas
//
//  Created by Humberto  Julião on 19/02/15.
//  Copyright (c) 2015 Vinicius Miana. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MySingleton : NSObject
+(MySingleton *) sharedInstance;

@end

