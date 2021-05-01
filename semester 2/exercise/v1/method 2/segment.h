#ifndef SEGMENT_H
#define SEGMENT_H

#include<iostream>
#include "point.h"
#include<cmath>

class segment{
    point p,p1;
public:
    segment(point a,point b)
        : p(a),
          p1(b){
              //nothing
          }
    float length(){
        float len_x = p1.X - p.X;
        float len_y = p1.Y - p.Y;
        float len = sqrt(pow(len_x,2) + pow(len_y,2));
        return len;
    }
    float Slope(){
        float slop = (p1.Y - p.Y)/(p1.X - p.X);
        return slop;
    }
    void line_equation(){
        float m = Slope();
        float b = p.X - (m * p.Y);
        std::cout << "y = (" << m << ")x + (" << b << ")";
    }
};

#endif
