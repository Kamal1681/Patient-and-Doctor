//
//  Patient.m
//  Patient and Doctor
//
//  Created by Kamal Maged on 2019-05-27.
//  Copyright © 2019 Kamal Maged. All rights reserved.
//

#import "Patient.h"

@implementation Patient
-(instancetype)initWithName: (NSString *)name andAge: (NSInteger)age {
    self = [super init];
    if (self) {
        _name = name;
        _age = age;
    }
    return self;
}
@end
