//
//  Contador.h
//  ContaPessoas
//
//  Created by Vinicius Miana on 2/18/15.
//  Copyright (c) 2015 Vinicius Miana. All rights reserved.
//
@protocol deleg <NSObject>

-(void)atualizar;

@end
@interface Contador : NSObject 

@property (nonatomic,weak)id mostrar;
+(instancetype)getInstance;
- (void)maisUmCueca;
- (void)maisUmaGata;

-(int)getBoys;
-(int)getGirls;
-(int)getTotal;

@end

