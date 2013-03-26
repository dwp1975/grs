//
//  MUPlaylist.h
//  Songs
//
//  Created by Steven Degutis on 3/25/13.
//  Copyright (c) 2013 Steven Degutis. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "MUPlaylistNode.h"
#import "MUUserPlaylist.h"

@interface MUPlaylist : NSObject <MUPlaylistNode, MUUserPlaylist>

- (void) setTitle:(NSString*)title;

@end