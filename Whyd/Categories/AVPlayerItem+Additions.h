//
//  AVPlayerItem+Additions.h
//  Whyd
//
//  Created by Damien Romito on 16/06/14.
//  Copyright (c) 2014 Damien Romito. All rights reserved.
//

#import <AVFoundation/AVFoundation.h>

@interface AVPlayerItem (Additions)

- (BOOL)urlIsEqualToString:(NSString*)string;

@end
