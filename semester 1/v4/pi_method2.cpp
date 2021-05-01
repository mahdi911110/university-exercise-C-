#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
void pi_calculate(int);
using namespace std;
// calculate pi number (method 2)
int main(){
    long int a;
    cout << "Enter number of iterations: ";
    cin >> a;
    pi_calculate(a);
}
void pi_calculate(int b){
    long long t = b, h = 0;
    double r1 , r2 , r , pi;
    srand(time(0));
    for (int i = 1; i < t; i++){
        r1 = (double)rand() / RAND_MAX;
        r2 = (double)rand() / RAND_MAX;
        if (r1 * r1 + r2 * r2 <= 1)
            h++;
    }
    pi = 4 * (double) h / t;
    cout << "pi is " << setprecision(20) << pi;
}