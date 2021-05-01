#include<iostream>
using namespace std;
void Time(int);
//convert seconds to --:--:--
int main(){
    int seconds;
    cout << "Enter your time(s): ";//per seconds
    cin >> seconds;
    Time(seconds);
}
void Time(int t){
    int i = 0,n = 0;
    while (t >= 60){
        i++;
        t -= 60;
        while (i >= 60){
            n++;
            i -= 60;
        }
    }
    cout << n << ":" << i << ":" << t;
}