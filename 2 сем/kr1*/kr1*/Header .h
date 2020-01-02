#ifndef Header_h
#define Header_h

#include <iostream>

using namespace std;

class Money
{
private:
    double sum;
    int cel;
    double drob;
public:
    Money();
    Money(double x, double y);
    Money(const Money&X);
    ~Money(){}
    Money operator +(const Money&X);
    Money operator -(const Money&X);
    Money operator -(double x);
    Money operator /(double x);
    Money operator *(double x);
    bool operator <(int x);
    bool operator ==(const Money&X);
    bool operator >=(const Money&X);
    bool operator <=(const Money&X);
    bool operator >(const Money&X);
    bool operator <(const Money&X);
    friend ostream& operator <<(ostream& s,Money&X);
    friend istream& operator >>(istream& s, Money&X);
};



#endif /* Header_h */
