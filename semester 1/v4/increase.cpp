#include<iostream>
using namespace std;
void read(float [],int);
void increas(float [],int,float);
void write(float [],int);
// increas arrays
int main(){
    int const arrays = 10;
    float increases;
    float a[arrays];
    read(a,arrays);
    cout << "Enter increase number for arrays: ";
    cin >> increases;
    increas(a,arrays,increases);
    write(a,arrays);
}
void read(float b[],int arraylen){
    cout << "Enter 10 numbers: ";
    for (int i = 0; i < arraylen; i++)
        cin >> b[i];
}
void increas(float b[],int arraylen,float increases1){
    for (int i = 0; i < arraylen; i++)
        b[i] += increases1;
}
void write(float b[],int arraylen){
    cout << "result:\n";
    for (int i = 0; i < arraylen; i++)
        cout << b[i] << " ";
}