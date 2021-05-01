#include<iostream>
#include "bank.h"
using namespace std;

int main(){
    int balance = 0,number = 75334566,choice,total,number2,total1 = 0;
    Date birth(1,12,2001);
    Date Register(3,12,2021);
    Date birth1(6,23,1910);
    Date Register1(9,23,1940);
    customer mahdi("Mahdi","Gorbany",'m',false,42342343,110020352,20,birth,Register);
    //you can add how many customer you want
    customer ali("ali","basi",'m',false,75334232,110092744,19,birth1,Register1);
    customer amir("amir","basi",'m',true,75334566,110092744,29,birth1,Register1);
    customer ahmad("ahmad","basi",'m',false,83746749,110916434,25,birth1,Register1);
    customer asghar("asghar","basi",'m',false,2873467,117654534,50,birth1,Register1);
    customer akbar("akbar","basi",'m',true,8473663,1100432134,40,birth1,Register1);
    Bank account1(mahdi);// main account
    Bank account2(ali);// this account is to transfer money to it
    account1.setTotal_Na(balance,number);
    while (choice != 0){
        account1.Info();
        cout << "----------------------------------------" << endl;
        cout << "|  Enter your choice:                  |" << endl;
        cout << "|  [1] deposit to account              |" << endl;
        cout << "|  [2] Withdrawal from account         |" << endl;
        cout << "|  [3] send money to another account   |" << endl;
        cout << "|  [4] Information                     |" << endl;
        cout << "|  [0] exit                            |" << endl;
        cout << "----------------------------------------" << endl;
        cout << "> ";
        cin >> choice;
        switch (choice){
        case 1:
            cout << "Enter balace of money for deposit: ";
            cin >> total;
            account1.setDta(total);
            break;
        case 2:
            cout << "Enter balace of money for Withdrawal from account: ";
            cin >> total;
            account1.setWithdrawal(total);
            break;
        case 3:
            cout << "Enter balance of money for send: ";
            cin >> total;
            cout << "Enter number account: ";
            cin >> number2;
            account2.setTotal_Na(total1,number2);
            account1.setSend(total,account2);
            //account2.Info();
            cout << endl;
            break;
        case 4:
            account1.Print();
        case 0:
            break;
        default:
            cout << "Invalid choice!" << endl;
            break;
        }
    }
    return 0;
}
