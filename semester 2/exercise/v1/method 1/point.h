#ifndef POINT_H
#define POINT_H

#include<iostream>
#include<cmath>

class point{
    float X,Y;
public:
    void setPoint(float x,float y){
        X = x;
        Y = y;
    }
    static float length(point a,point b){//p is first point & p1 is second point
        float len_x = b.X - a.X;
        float len_y = b.Y - a.Y;
        float len = sqrt(pow(len_x,2) + pow(len_y,2));
        return len;
    }
    static float Slop(point a,point b){
        float m;
        m = (b.Y - a.Y)/(b.X - a.X);
        return m;
    }
    static void lineEquation(point a,point b){
        float m = Slop(a,b);
        float B = a.Y - (m * a.X);
        std::cout << "y = (" << m << ")x + (" << B << ")";
    }
};

#endif