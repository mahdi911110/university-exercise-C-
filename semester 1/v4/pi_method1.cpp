#include<iostream>
using namespace std;
// calculate pi number
int main(){
    int c = 0;
    double pi = 0;
    float a = 200000;
    for(a = 1; a <= 200000;a += 2){
            if(c == 0){
                pi += 4/a;
                c++;
            }
            else{
                pi -= 4/a;
                c--;
            }
        }
        cout << "PI's Value = " << pi <<endl;
    return 0;
}