//
//  FTTMGameViewController.h
//  FortyTwo
//
//  Created by Forrest Ye on 8/28/13.
//  Copyright (c) 2013 Forrest Ye. All rights reserved.
//

#import <Cocoa/Cocoa.h>

// frame control
#import "FTTFrameManager.h"

// keyboard control
#import "FTTMKeyboardInputSource.h"


@interface FTTMGameViewController : NSViewController <FTTFrameManagerDelegate, FFTMKeyboardInputSourceDelegate>

- (void) stopGame;

@end
