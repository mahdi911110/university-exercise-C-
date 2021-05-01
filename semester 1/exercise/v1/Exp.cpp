#include<iostream>
#include<cmath>
using namespace std;
//calculate the number of e
int main(){
    int n;
    cout << "Enter your number: ";
    cin >> n;
    double a = 0;
    float d = 1;
    for (int i = 1; i <= n; i++){
        d *= i;
        a += (1/d);
    }
    double b = exp(a);
    cout << "result is " << b;
}