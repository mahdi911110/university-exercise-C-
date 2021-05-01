#include<iostream>
#include<cmath>
#include "segment.h"
using namespace std;

int main(){
    point one,two;
    segment line;
    float x,y,x1,y1;
    cout << "Enter position of point one(x,y): ";
    cin >> x >> y;
    cout << "Enter position of point two(x,y): ";
    cin >> x1 >> y1;
    one.setPoint(x,y);
    two.setPoint(x1,y1);
    cout << "length of line: " << line.length(one,two) << endl;
    cout << "Slope of line: " << line.Slope(one,two) << endl;
    line.line_equation(one,two);
    return 0;
}