#ifndef POINT_H
#define POINT_H

class point{
    float X,Y;
    friend class segment;
public:
    point(float x,float y){
        X = x;
        Y = y;
    }
};

#endif