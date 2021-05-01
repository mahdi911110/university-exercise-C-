#include<iostream>
#include "segment.h"
using namespace std;

int main(){
    float x,y,x1,y1;
    cout << "Enter position of point one(x,y): ";
    cin >> x >> y;
    cout << "Enter position of point two(x,y): ";
    cin >> x1 >> y1;
    point one(x,y);
    point two(x1,y1);
    segment line(one,two);
    cout << "length of line: " << line.length() << endl;
    cout << "Slope of line: " << line.Slope() << endl;
    cout << "line equation: ";
    line.line_equation();
    return 0;
}
