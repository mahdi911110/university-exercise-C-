#include<iostream>
using namespace std;
//swap two variable with a auxiliary variable
int main(){
    int a,b;
    cout << "Enter a & b:";
    cin >> a >> b;
    int temp = a;
    a = b;
    b = temp;
    cout << "a: " << a << endl << "b: " << b;
}