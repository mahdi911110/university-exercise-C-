#include<iostream>
using namespace std;
//calculate percentage of scores average
int main(){
    char want;
    int score;
    int i = 0;
    int accepted = 0;
    do{
        i += 1;
        cout << "score: ";
        cin >> score;
        if (score  > 100){
            cout << "Undifind number!";
        }
        if (score >= 60){
            accepted += 1;
        }
        cout << "do you want to continue?(y/n)";
        cin >> want;
    } while (want == 'y');
    cout << "Acceptance percentage: " << (accepted * 100) / i << " %";
}