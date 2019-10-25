#include "Header.h"
Money::Money():sum(0),cel(0),drob(0){}
Money::Money(double x, double y)
{
    
        cel=x;
        drob=y;
        sum=x+y/100;
}
Money::Money(const Money&X)
{
    drob=X.drob;
    sum=X.sum;
    cel=X.cel;
}
Money Money::operator +(const Money&X)
{
    Money H(*this);
    H.cel+=X.cel;
    H.sum+=X.sum;
    H.drob+=X.drob;
    return H;
}
Money Money::operator -(const Money&X)
{
    Money H(*this);
        H.cel-=X.cel;
        H.sum-=X.sum;
        H.drob-=X.drob;
    return H;
}
Money Money::operator -(double x)
{
    Money H(*this);
        H.sum-=x;
        H.cel=(int)H.sum;
        H.drob=H.sum-H.drob;
    return H;
}
Money Money::operator /(double x)
{
    Money H(*this);
        H.sum/=x;
        H.cel=(int)H.sum;
        H.drob=H.sum-H.cel;
    return H;
}
Money Money::operator *(double x)
{
    Money H(*this);
        H.sum*=x;
        H.cel=(int)H.sum;
        H.drob=H.sum-H.cel;
    return H;
}
bool Money::operator <(int x)
{
    if(sum<0)
        return true;
    return false;
}

bool Money::operator >=(const Money&X)
{
    return sum>=X.sum;
}
bool Money::operator ==(const Money&X)
{
    return sum==X.sum;
}

bool Money::operator >(const Money&X)
{
    return sum>X.sum;
}
bool Money::operator <=(const Money&X)
{
    return sum<=X.sum;
}
bool Money::operator <(const Money&X)
{
    return sum<X.sum;
}
ostream& operator <<(ostream& s,Money&X)
{
    cout<<X.sum<<endl;
    return s;
}
istream& operator >>(istream& s, Money&X)
{
    cin>>X.sum;
    return s;
}
