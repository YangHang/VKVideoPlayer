//
//  Created by Viki.
//  Copyright (c) 2014 Viki Inc. All rights reserved.
//

#import "VKVideoPlayer.h"
#import "VKVideoPlayerConfig.h"

@protocol customer <NSObject>

- (void)willChangeOrientationTo:(UIInterfaceOrientation)orientation;
- (void)didChangeOrientationFrom:(UIInterfaceOrientation)orientation;

@end

@interface VKVideoPlayerViewController: UIViewController <
  VKVideoPlayerDelegate
>

@property (nonatomic, strong) VKVideoPlayer* player;
@property (nonatomic,assign) id<customer>delegate;
- (void)playVideoWithStreamURL:(NSURL*)streamURL;
- (void)setSubtitle:(VKVideoPlayerCaption*)subtitle;
@end
