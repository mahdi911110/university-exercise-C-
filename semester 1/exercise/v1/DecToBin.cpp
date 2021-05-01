#include<iostream> 
using namespace std; 
void bin(unsigned);
//convert decimal to binary
int main(){
    unsigned number;
    cout << "Enter your number: ";
    cin >> number;
    bin(number);
}

void bin(unsigned n) { 
    /* step 1 */
    if (n > 1) 
        bin(n / 2); 
    /* step 2 */
    cout << n % 2; 
} 