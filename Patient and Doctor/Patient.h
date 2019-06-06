//
//  Patient.h
//  Patient and Doctor
//
//  Created by Kamal Maged on 2019-05-27.
//  Copyright © 2019 Kamal Maged. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Symptom.h"
NS_ASSUME_NONNULL_BEGIN

@interface Patient : NSObject

@property (nonatomic) NSInteger age;
@property (nonatomic, strong) NSString * name;
@property (nonatomic) BOOL healthCard;
@property (nonatomic, strong) Symptom * symptom;
-(instancetype)initWithName: (NSString *)name andAge: (NSInteger)age;
@end

NS_ASSUME_NONNULL_END
