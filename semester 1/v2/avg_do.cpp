#include<iostream>
using namespace std;

int main(){
    char yorn;//yes or no
    int i = 0,sum = 0,save;
    do{
        i++;
        cout << "Enter number: ";
        cin >> save;
        sum += save;
        cout << "do you want to add another number?(y/n)";
        cin >> yorn;
    } while (yorn == 'y');
    int avg = sum / i;
    cout << "Average: " << avg;
}