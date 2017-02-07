//
//  facerec.h
//
//  Created by if on 17/02/06.
//  Copyright (c) 2017 iF. All rights reserved.
//

#import <Foundation/Foundation.h>
#include <vector>

@interface Faces : NSObject
+ (std::vector <float*>)recognizeFacesWith:(unsigned char *)data width:(int)width height:(int)height;
@end

