#include "functions.cpp"
#include "Header.h"
int main()
{
    Money r(20,10),m(10,5);
    Money H=r-20.0;
    cout<<(r>m)<<endl;
    H=r*(5);
    cout<<H;
    Money C(r);
    cout<<C<<endl;
    return 0;
}
    


