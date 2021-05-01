#ifndef CUSTOMER_H
#define CUSTOMER_H

#include<string>
#include "date.h"
using namespace std;

class customer{
    string firstName,lastName;
    char gender;
    bool married;
    int id,Nid,age;//Nid is national id(code)
    const Date birthDate;
    const Date registerDate;
    static int counter;
public:
    customer(const string &first,const string &last,const char &Gender,const bool &Married,const int &Id,const int &NId,const int &Age,const Date &dateOfBirh,const Date &dateOfRegister)
      : firstName(first),
        lastName(last),
        birthDate(dateOfBirh),
        registerDate(dateOfRegister),
        gender(Gender),
        married(Married),
        id(Id),
        Nid(NId),
        age(Age){
        //cout << "customer object constructor: " << firstName << " " << lastName << endl;
        counter++;// counter is to calculate the number of customers 
    }
    static int getCounter(){
        return counter;
    }
    void print() const{
    cout << "first & last name: " << firstName << " " << lastName << endl;
    cout << "age: " << age << endl;
    cout << "Registered: ";
    registerDate.print();
    cout << "\nBirthday: ";
    birthDate.print();
    cout << "\ncounter of customers: " << getCounter() << endl;
    if (gender == 'm')
        cout << "gender: male" << endl;
    else
        cout << "gender: female" << endl;
    if(married == true)
        cout << "married: yes" << endl;
    else
        cout << "married: no" << endl;
    cout << "id: " << id << endl;
    cout << "national id: " << Nid <<endl;
    }

/*  ~customer(){
        cout << "customer object destructor: " << lastName << ", " << firstName << endl;
    } */
};
int customer::counter = 0;

#endif
