//
//  CVCameraProvider.h
//  opencvtest
//
//  Created by Engin Kurutepe on 16/01/15.
//  Copyright (c) 2015 Fifteen Jugglers Software. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
#import <UIKit/UIKit.h>

@interface facerec : UIView

- (instancetype)initWithFrame:(CGRect)frame;
- (NSString *) documentFolder;
- (void)recognizeFacesWith:(CMSampleBufferRef)buffer;

@end
