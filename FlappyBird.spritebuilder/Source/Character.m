//
//  Character.m
//  FlappyFly
//
//  Created by Gerald on 2/11/14.
//  Copyright (c) 2014 Apportable. All rights reserved.
//

#import "Character.h"
#import "GamePlayScene.h"

@implementation Character

- (void)didLoadFromCCB
{
    self.position = ccp(115, 350);
    self.zOrder = DrawingOrderHero;
    self.physicsBody.collisionType = @"character";
    self.physicsBody.friction = 0.f;
}

+(Character*) createFlappy
{
    return (Character*)[CCBReader load:@"Character"];
}

@end
