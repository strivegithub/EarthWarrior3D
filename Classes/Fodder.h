//
//  Fodder.h
//  Moon3d
//
//  Created by Hao Wu on 2/27/14.
//
//

#ifndef __Moon3d__Fodder__
#define __Moon3d__Fodder__

#include "cocos2d.h"
#include "AirCraft.h"

class Fodder : public AirCraft
{
public:
    bool init();
    void move(const Point& position,AirCraft * enemy);
    CREATE_FUNC(Fodder);
protected:
    AirCraft* fodder;
    
    float rollSpeed;
    float smoothAngle = 0.0f;
    const float maxRotationAngle = 60.0f;
    bool isRevert = false;
    
    bool isMoving = false;
    Point endPosition;
    
    const float percent = 300;
    const float fodderSpeed = 4.0f;
    float perPeriodTime;
    float totalTime;
    const float sA = 200.0f;
    float sW;
    
    void update(float dt);
    void RemoveFodder(float dt);
};

#endif /* defined(__Moon3d__Fodder__) */
