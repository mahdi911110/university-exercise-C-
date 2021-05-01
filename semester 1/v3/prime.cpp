#include<iostream>
using namespace std;
void Prime(int);
//calculate prime number
int main(){
    int number;
    cout << "Enter your number: ";
    cin >> number;
    Prime(number);
}
void Prime(int n){
    bool isPrime = true;
    if (n == 0 || n == 1){
        isPrime = false;
    }
    else {
        for (int i = 2; i <= n / 2; ++i) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    if (isPrime)
        cout << n << " is a prime number";
    else
        cout << n << " is not a prime number";
}