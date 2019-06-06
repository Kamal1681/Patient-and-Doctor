//
//  Symptom.m
//  Patient and Doctor
//
//  Created by Kamal Maged on 2019-06-06.
//  Copyright © 2019 Kamal Maged. All rights reserved.
//

#import "Symptom.h"

@implementation Symptom
-(instancetype)initWithSymptoms: (NSArray <NSString *> *) symptoms
{
    self = [super init];
    if (self) {
        _symptoms = symptoms;
    }
    return self;
}
@end
