#include<iostream>
#include<cstdlib>
using namespace std;
//this program create random double digit
int main(){
    int Rand;
    for (int i = 0; i < 100; i++){
        Rand = rand() % (100 - 10) + 10;
        cout << Rand << endl;
    }
}