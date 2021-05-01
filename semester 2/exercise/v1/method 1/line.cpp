#include<iostream>
#include "point.h"
using namespace std;
int main(){
    point a,b;
    float x,y,x1,y1;
    cout << "Enter position of first point: ";
    cin >> x >> y;
    cout << "Enter position of second point: ";
    cin >> x1 >> y1;
    a.setPoint(x,y);
    b.setPoint(x1,y1);
    cout << "Slope: " << point::Slop(a,b) << endl;
    cout << "length: " << point::length(a,b) << endl;
    cout << "line equation: ";
    point::lineEquation(a,b);
}