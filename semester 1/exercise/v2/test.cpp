#include<iostream>
using namespace std;
void readMarks (float[][2], int);
void showelements (float[][2], int);
int faillessons (float[][2], int);
float avg (float[][2], int);
int main(){
    int rowSize;
    cout << "Enter number of courses: ";
    cin >> rowSize;
    float marks[rowSize][2];
    readMarks(marks, rowSize);
    showelements(marks, rowSize);
    cout << faillessons(marks, rowSize) << endl;
    cout << "average is " <<avg(marks, rowSize)<<endl;
}
void readMarks(float a[][2], int n){
    cout << "Enter credit and mark for each course: ";
    for (int i = 0; i < n; i++){
        cin >> a[i][0] >> a[i][1];
    }
}
void showelements(float a[][2], int n){
    cout <<"credit and mark are: "<<endl;
    for (int i = 0; i < n; i++){
        cout<<a[i][0]<<"\t"<<a[i][1]<<endl;
    }
}
int faillessons(float a[][2], int n){
    int min, fialed = 0;
    cout << "Enter minimum score for pass: ";
    cin >> min;
    for (int i = 0; i < n; i++){
        if (a[i][1]<min){
            fialed++;
        }
    }
    cout << "failed lessons are ";
    return fialed;
}
float avg(float a[][2], int n){
    float sum = 0,avg,sum1 = 0;
    for (int i = 0; i < n; i++){
        sum += a[i][0]*a[i][1];
        sum1 += a[i][0];
    }
    avg = sum/sum1;
    return avg;
}