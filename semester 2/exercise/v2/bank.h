#ifndef BANK_H
#define BANK_H

#include<iostream>
#include "customer.h"
using namespace std;
//bank program
class Bank {
    int number_account,total;
    const customer Data;
public:
    Bank(const customer DD)
    :Data(DD){
        cout << "app started good" << endl;
    }
    void Print(){
        Data.print();
    }
    void setTotal_Na(int inventory,int number){
        total = inventory;
        number_account = number;
    }
    void setDta(int money){// deposit to account
        total += money;
    }
    void setWithdrawal(int money){
        try{
            total -= money;
            if (total < 0){
                total += money;
                throw(total);
            }
        }
        catch(int inventory){
            cout << "----------------------------------------" << endl;
            cout << "Not enough inventory!" << endl << "total: " << inventory << endl;
            cout << "----------------------------------------" << endl;
        }
    }
    void setSend(int firstA,Bank &secondA){
        try{
            total -= firstA;
            if (total >= 0){
                secondA.total += firstA;
                cout << "sending was successfully to number account: " << secondA.number_account << endl;
            }
            else{
                total += firstA;
                throw(total);
            }
        }
        catch(int inventory){
            cout << "----------------------------------------" << endl;
            cout << "Not enough inventory!" << endl << "total: " << inventory << endl;
            cout << "----------------------------------------" << endl;
        }
    }
    int getInfot(){
        return total;
    }
    int getInfon(){
        return number_account;
    }
    void Info(){
        cout << "********************************" << endl;
        cout << "your total: " << getInfot() << endl;
        cout << "with number account " << getInfon() << endl;
        cout << "********************************" << endl;
    }
};

#endif
