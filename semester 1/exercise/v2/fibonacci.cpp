#include<iostream>
using namespace std;
void fibonacci(int);
//calculate fibonacci in sequence of n
int main(){
    int number;
    cout << "Enter a number: ";
    cin >> number;
    fibonacci(number);
}
void fibonacci(int n){
    int first = 0,second = 1,third;
    for(int i = 1;i < n;i++){
        third = first + second;
        first = second;
        second = third;
    }
    cout << "the " << n << "th" << "sequence of fibonacci is " << first;
}