#ifndef POINT_H
#define POINT_H

class point{
    float X,Y;
public:
    void setPoint(float x,float y){
        X = x;
        Y = y;
    }
    float getX(){
        return X;
    }
    float getY(){
        return Y;
    }
};

#endif