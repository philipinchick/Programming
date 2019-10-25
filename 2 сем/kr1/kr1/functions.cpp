#include "Header.h"
Money::Money(): c(0), d(0), sum(0){}
Money::Money(double r, double m)
{
    c=r;
    d=m;
    sum=(r+m)/100;
}
Money::Money(const Money&X)
{
    sum=X.sum;
    c=X.c;
    d=X.d;
    
}
Money Money::operator -(const Money&X)
{
    Money H(*this);
    H.c-=X.c;
    H.sum-=X.sum;
    H.d-=H.d;
    return H;
    
}
Money Money::operator -(double r)
{
    Money H(*this);
    H.sum-=r;
    H.c=(int)H.sum;
    H.d=H.sum=H.c;
    return H;
}
Money Money::operator +(const Money&X)
{
    Money H(*this);
    H.c=+X.c;
    H.sum+=X.sum;
    H.d+=X.d;
    return H;
}
Money Money::operator *(double r)
{
    Money H(*this);
    H.sum*=r;
    H.c=(int)H.sum;
    H.d=H.sum-H.c;
    return H;
}
Money Money::operator /(double r)
{
    Money H(*this);
    H.sum/=r;
    H.c=(int)H.sum;
    H.d=H.sum=H.c;
    return H;
}
bool Money::operator ==(const Money&X)
{
    return sum==X.sum;
}
bool Money::operator <=(const Money&X)
{
    return sum<=X.sum;
}
bool Money::operator >=(const Money&X)
{
    return sum>=X.sum;
}
bool Money::operator <(const Money&X)
{
    return sum<X.sum;
}
bool Money::operator >(const Money&X)
{
    return sum>X.sum;
}
ostream& operator <<(ostream& t, Money&X)
{
    cout<<X.sum<<endl;
    return t;
}
