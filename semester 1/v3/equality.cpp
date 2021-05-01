#include<iostream>
#include<cmath>
using namespace std;
// This program shows the correct formula of b^n = e^(n*log(b))
int main(){
    int b = 4;
    int n = 4;
    cout << "b^n : " << pow(b,n) << endl;
    cout << "exp^(n*log(b)) : " << exp(n*log(b));
    return 0;
}