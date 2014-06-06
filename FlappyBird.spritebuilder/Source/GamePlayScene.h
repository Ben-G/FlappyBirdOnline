//
//  GamePlayScene.h
//  FlappyFly
//
//  Created by Gerald on 2/11/14.
//  Copyright (c) 2014 Apportable. All rights reserved.
//

#import "CCNode.h"
#import "Character.h"

typedef NS_ENUM(NSInteger, DrawingOrder) {
    DrawingOrderPipes,
    DrawingOrderGround,
    DrawingOrderHero
};

@interface GamePlayScene : CCNode <CCPhysicsCollisionDelegate>
{
    Character*     character;
    CCPhysicsNode* physicsNode;
    int            points;
    CCParticleSystem* trail;
}

-(void) initialize;
-(void) addObstacle;
-(void) gameOver;
-(void) showScore;
-(void) updateScore;
-(void) addToScene:(CCNode*)obj;
-(void) addPowerup;
@end
