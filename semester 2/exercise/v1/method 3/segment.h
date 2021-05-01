#ifndef SEGMENT_H
#define SEGMENT_H

#include<iostream>
#include "point.h"
#include<cmath>

class segment{
public:
    float length(point p,point p1){//p is first point & p1 is second point
        float len_x = p1.getX() - p.getX();
        float len_y = p1.getY() - p.getY();
        float len = sqrt(pow(len_x,2) + pow(len_y,2));
        return len;
    }
    float Slope(point p,point p1){
        float slop = (p1.getY() - p.getY())/(p1.getX() - p.getX());
        return slop;
    }
    void line_equation(point p,point p1){
        float m = Slope(p,p1);
        float b = p.getY() - (m * p.getX());
        std::cout << "y = " << m << "x + " << b; 
    }
};

#endif