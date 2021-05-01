#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
//calculate equation degree(power) 2 roots
int main(){
    float a, b, c;

    cout << "Enter a & b & c: ";
    cin >> a >> b >> c;

    float d = pow(b,2) - (4 * a * c);//d is Delta
    float x = -b/ (2 * a);
    float x1 = (-b + sqrt(d)) / (2 * a);
    float x2 = (-b - sqrt(d)) / (2 * a);
    
    if (d > 0)
        cout << "The equation have two true roots (d > 0) : " << x1 << " and " << x2;
    else if (d == 0)
        cout << "The equation has a true root (d == 0): " << x;
    else if (d < 0)
        cout << "The equation has no ture root (d < 0)";
    return 0;
}