#include<iostream>
using namespace std;
//complate number
int main(){
    int num,sum = 0;
    cout << "Enter your number: ";
    cin >> num;
    for (int i = 1; i < num; i++){
        if (num % i == 0){
            sum += i;
        }
    }
    if (sum == num){
        cout << "number is complate";
    }
    else{
        cout << "number is not complate";
    }
}