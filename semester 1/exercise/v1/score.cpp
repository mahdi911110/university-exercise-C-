#include<iostream>
using namespace std;
//calculate score to character
int main(){
    int score;
    cout << "Enter your score: ";
    cin >> score;//range 0 to 100
    score /= 10;
    switch (score){
    case 10:
        cout << "your score is A";
        break;
    case 9:
        cout << "your score is B";
        break;
    case 8:
        cout << "your score is C";
        break;
    case 7:
        cout << "your score is D";
        break;
    case 6:
        cout << "your score is E";
        break;
    default:
        cout << "your score is F";
        break;
    }
}