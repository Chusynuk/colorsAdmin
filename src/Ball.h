//
//  Ball.h
//  Balls
//
//  Created by Eloi on 3/3/18.
//

#ifndef Ball_h
#define Ball_h

#include "ofMain.h"

class Ball {
    
public:
    void setup(float _x, float _y, int _dim);
    
    void update();
    void draw();
    
    float x;
    float y;
    float speedX;
    float speedY;
    int dim;
    ofColor color;
    
    Ball();
    
private:
};

#endif /* Ball_h */
