#include<iostream>
using namespace std;
//this program put 0 between number that you give to it
int main(){
    int a;
    int b;
    int i = 1;
    int d = 0;
    int c = 0;
    cout << "Enter your number: ";
    cin >> a;
    do{
        c = (a % 10);
        d += (c * i);
        i = i * 100;
        a /= 10;
    } while (a != 0);
    b = d;
    cout << "result: " << b;
    return 0;
}