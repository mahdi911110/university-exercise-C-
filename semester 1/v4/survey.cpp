#include<iostream>
bool survey(int [],int);
using namespace std;
// survey of array regular
int main(){
    int arraylenght;
    cout << "Enter array lenght: ";
    cin >> arraylenght;
    int array[arraylenght];
    cout << "Enter array numbers:";
    for (int i = 0; i < arraylenght; i++)
        cin >> array[i];
    cout << "result is " << boolalpha << survey(array,arraylenght);
}
bool survey(int a[],int b){
    for (int i = 0; i < b; i++){
        if (a[i] > a[i+1])
            return false;
    }
    return true;
}