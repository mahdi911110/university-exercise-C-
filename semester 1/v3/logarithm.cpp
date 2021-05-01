#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int a,b;
    float result;
    cout << "Enter a & b: ";
    cin >> a >> b;
    result = log(a)/log(b);
    cout << "logarithm a on the basis of b: " << result;
}