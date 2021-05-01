#include<iostream>
using namespace std;
void buble(int [],int);
// sort of bubble measuring
int main(){
    int arrays = 10;
    int a[arrays] = {5,8,2,4,7,1,3,9,10,14};
    buble(a,arrays);
}
void buble(int b[],int arraylen){
    int i,j;
    for (i = 0; i < arraylen; i++){
        for (j = 0; j < arraylen-i-1; j++){
            if (b[j]>b[j+1]){
                int temp = b[j];
                b[j] = b[j+1];
                b[j+1] = temp;
            }
        }
    }
    for (int i = 0; i < arraylen; i++){
        cout << b[i] << " ";
    }
}
