//
//  SOSong.h
//  Songs
//
//  Created by Steven Degutis on 3/24/13.
//  Copyright (c) 2013 Steven Degutis. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <AVFoundation/AVFoundation.h>

@interface SDSong : NSObject <NSSecureCoding>

@property NSURL* url;

- (NSString*) title;
- (NSString*) album;
- (NSString*) artist;

- (AVPlayerItem*) playerItem;

@end
