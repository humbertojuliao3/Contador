//
//  MySingleton.m
//  ContaPessoas
//
//  Created by Humberto  Julião on 19/02/15.
//  Copyright (c) 2015 Vinicius Miana. All rights reserved.
//

#import "MySingleton.h"

@implementation MySingleton
+ (MySingleton *)sharedInstance{
    static MySingleton * sharedMyManager = nil ;
    static dispatch_once_t token ;
    dispatch_once ( & token , ^ { sharedMyManager = [[ self alloc ] init ]; });
    return sharedMyManager ;
}

@end
