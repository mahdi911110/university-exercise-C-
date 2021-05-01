#include<iostream>
using namespace std;
//calculate (1/1)-(1/2)+(1/3)-(1/4)+(1/5)-...+(1/99)-(1/100)
int main(){
    float a = 1;
    float c = 0;
    float d = 0;
    for (int i = 1; i <= 100; i++){
        if (i % 2 == 0){
            float b = (a/i);
            c += b;
        }
        else{
            float c = -(a/i);
            d += c;
        }
    }
    cout << "result is " << (c+d)*(-1);
    return 0;
}