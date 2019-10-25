#ifndef Header_h
#define Header_h
#include <iostream>
using namespace std;

class Money
{
private:
    int c;
    double d;
    double sum;
public:
    Money();
    Money(double r, double m);
    Money(const Money&X);
    ~Money(){};
    Money operator -(const Money&X);
    Money operator -(double r);
    Money operator +(const Money&X);
    Money operator *(double r);
    Money operator /(double r);
    bool operator ==(const Money&X);
    bool operator <=(const Money&X);
    bool operator >=(const Money&X);
    bool operator <(const Money&X);
    bool operator >(const Money&X);
    friend ostream& operator <<(ostream& t, Money&X);
};

#endif /* Header_h */
