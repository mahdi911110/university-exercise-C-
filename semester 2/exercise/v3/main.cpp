#include<iostream>
#include "Fraction.cpp"
using namespace std;

// main file for test Fraction app

int main(){
    Fraction a,b;
    cout << "Enter two fractions (a/b):";
    cin >> a >> b;
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
    if(a == b)
        cout << "a == b" << endl;
    if(a >= b)
        cout << "a >= b" << endl;
    if(a <= b)
        cout << "a <= b" << endl;
    if(a != b)
        cout << "a != b" << endl;
    if(a > b)
        cout << "a > b" << endl;
    if(a < b)
        cout << "a < b" << endl;
}
