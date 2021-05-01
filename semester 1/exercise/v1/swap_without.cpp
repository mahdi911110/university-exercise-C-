#include<iostream>
using namespace std;
//swap two variable without a auxiliary variable
int main(){
    int a,b;
    cout << "Enter a & b:";
    cin >> a >> b;
    a = a - b;
    b = b + a;
    a = b - a;
    cout << "a: " << a << endl << "b: " << b;
}