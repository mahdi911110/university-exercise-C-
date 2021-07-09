#ifndef FRACTION_H
#define FRACTION_H

#include<iostream>
using namespace std;

// operator overflowing
// Fraction class

class Fraction{
    int Numerator,denominator;
    friend ostream &operator<<(ostream&,const Fraction&);
    friend istream &operator>>(istream&,Fraction&);
public:
    Fraction();
    Fraction(int,int);
    Fraction operator+(Fraction) const;
    Fraction operator-(Fraction) const;
    Fraction operator*(Fraction) const;
    Fraction operator/(Fraction) const;
    bool operator==(Fraction) const;
    bool operator!=(Fraction) const;
    bool operator<=(Fraction) const;
    bool operator>=(Fraction) const;
    bool operator<(Fraction) const;
    bool operator>(Fraction) const;
    Fraction reduce() const;
};

#endif