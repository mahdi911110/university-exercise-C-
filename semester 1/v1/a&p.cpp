#include<iostream>
using namespace std;

int main(){
    int length,width,area,perimeter;
    cout << "Enter length & width: ";
    cin >> length >> width;
    area = length * width;
    perimeter = (length + width) * 2;
    cout << "Area: " << area << endl;
    cout << "Perimeter: " << perimeter; 
}