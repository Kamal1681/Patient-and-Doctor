//
//  Doctor.h
//  Patient and Doctor
//
//  Created by Kamal Maged on 2019-05-27.
//  Copyright © 2019 Kamal Maged. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Patient.h"
NS_ASSUME_NONNULL_BEGIN

@interface Doctor : NSObject
@property (nonatomic, strong) NSString * specialization;
@property (nonatomic, strong) NSString * name;
@property (nonatomic, strong) NSMutableArray <Patient *> * patientList;
-(instancetype)initWithName: (NSString *)name andSpecialization: (NSString *)specialization;
-(BOOL)visit: (Patient *) patient;
@end

NS_ASSUME_NONNULL_END
