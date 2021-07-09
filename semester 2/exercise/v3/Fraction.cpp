#include<iostream>
#include "Fraction.h"
#include <stdexcept>
using namespace std;

// functions of Fraction class

Fraction::Fraction(){
    // empty body
}
Fraction::Fraction(int Numerator,int denominator){
    this->Numerator = Numerator;
    this->denominator = denominator;
}
Fraction Fraction::operator +(Fraction v) const{
    Fraction result;
    if (this->denominator != v.denominator){
        result.Numerator = (this->Numerator * v.denominator) + (v.Numerator * this->denominator);
        result.denominator = (this->denominator * v.denominator);
    }
    else{
        result.Numerator = this->Numerator + v.Numerator;
        result.denominator = this->denominator;
    }
    return result.reduce();
}
Fraction Fraction::operator -(Fraction v) const{
    Fraction result;
    if (this->denominator != v.denominator){
        result.Numerator = (this->Numerator * v.denominator) - (v.Numerator * this->denominator);
        result.denominator = (this->denominator * v.denominator);
    }
    else{
        result.Numerator = this->Numerator - v.Numerator;
        result.denominator = this->denominator;
    }
    return result.reduce();
}
Fraction Fraction::operator /(Fraction v) const{
    Fraction result;
    result.Numerator = this->Numerator * v.denominator;
    result.denominator = this->denominator * v.Numerator;
    return result.reduce();
}
Fraction Fraction::operator *(Fraction v) const{
    Fraction result;
    result.Numerator = this->Numerator * v.Numerator;
    result.denominator = this->denominator * v.denominator;
    return result.reduce();
}
Fraction Fraction::reduce() const{
    if (denominator == 0)
        throw invalid_argument("invalid number for fraction");
    Fraction result;
    if (this->denominator >= this->Numerator){
        int temp,a = this->denominator,b = this->Numerator;
        while(true){
        if(b == 0)
            break;
        temp = a % b;
        a = b;
        b = temp;
        }
        result.Numerator = this->Numerator / a;
        result.denominator = this->denominator / a;
        if (result.denominator < 0 && result.Numerator > 0){
            result.Numerator *= -1;
            result.denominator *= -1;
        }
    }
    else if (this->denominator < this->Numerator){
        int temp,a = this->Numerator,b = this->denominator;
        while(true){
        if(b == 0)
            break;
        temp = a % b;
        a = b;
        b = temp;
        }
        result.Numerator = this->Numerator / a;
        result.denominator = this->denominator / a;
        if (result.denominator < 0 && result.Numerator > 0){
            result.Numerator *= -1;
            result.denominator *= -1;
        }
    }
    return result;
}
bool Fraction::operator==(Fraction v) const{
    int num1 = this->Numerator * v.denominator;
    int num2 = v.Numerator * this->denominator;
    if (num1 == num2)
        return true;
    return false;
}
bool Fraction::operator!=(Fraction v) const{
    int num1 = this->Numerator * v.denominator;
    int num2 = v.Numerator * this->denominator;
    if (num1 == num2)
        return false;
    return true;
}
bool Fraction::operator<=(Fraction v) const{
    int num1 = this->Numerator * v.denominator;
    int num2 = v.Numerator * this->denominator;
    if (num1 <= num2)
        return true;
    return false;
}
bool Fraction::operator>=(Fraction v) const{
    int num1 = this->Numerator * v.denominator;
    int num2 = v.Numerator * this->denominator;
    if (num1 >= num2)
        return true;
    return false;
}
bool Fraction::operator>(Fraction v) const{
    int num1 = this->Numerator * v.denominator;
    int num2 = v.Numerator * this->denominator;
    if (num1 > num2)
        return true;
    return false;
}
bool Fraction::operator<(Fraction v) const{
    int num1 = this->Numerator * v.denominator;
    int num2 = v.Numerator * this->denominator;
    if (num1 < num2)
        return true;
    return false;
}
ostream &operator<<(ostream &output,const Fraction &v){
    if(v.denominator == 1 || v.Numerator == 0)
        output << v.Numerator;
    else
        output << v.Numerator << "/" << v.denominator;
    return output;
}
istream &operator>>(istream &input,Fraction &v){
    input >> v.Numerator;
    input.ignore();// skip '/'
    input >> v.denominator;
    input.ignore();// skip enter or space
    return input;
}
