//
//  Prescription.h
//  Patient and Doctor
//
//  Created by Kamal Maged on 2019-06-06.
//  Copyright © 2019 Kamal Maged. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Prescription : NSObject
@property (nonatomic, strong) NSArray <NSString *> * prescription;
-(instancetype)initWithPrescription: (NSArray <NSString *> *) prescription;
@end

NS_ASSUME_NONNULL_END
