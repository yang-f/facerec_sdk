//
//  facerec.h
//
//  Created by if on 17/02/06.
//  Copyright (c) 2017 iF. All rights reserved.
//

#import <Foundation/Foundation.h>
#include <vector>
//=result_aflw1w_4w_iter160_far6_notEnd.bin
//=Cuted_shape_predictor_68_face_landmarks_5_stage.dat
@interface Faces : NSObject

+ (std::vector <float*>)recognizeWith:(unsigned char *)data width:(int)width height:(int)height angle:(double)angle;
+ (std::vector <float*>)recognizeWith:(unsigned char *)data width:(int)width height:(int)height angle:(double)angle score:(int)score;
+ (NSMutableArray *)pointsWithScaleX:(float)scaleX andScaleY:(float)scaleY;
+ (NSMutableArray *)getAngles;


@end

