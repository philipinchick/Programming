#include "Header.h"

int main()
{
    int x, y, x1, y1;
    cout<<"введите целые и дробные части чисел A и B"<<endl;
    cin>>x>>y>>x1>>y1;
    Money A(x,y),B(x1,y1);
    cout<<"A="<<A<<"B="<<B<<endl;
    Money H=A-20.0;
    cout<<"A-20.10="<<H;
    H=A+B;
    cout<<"A+B="<<H;
    if((A>B)==1)
        cout<<"A>B верно"<<endl;
    else cout<<"A>B не верно"<<endl;
    if((A==B)==1)
        cout<<" A=B верно"<<endl;
    else cout<<"A=B не верно"<<endl;
    H=A*(5);
    cout<<"A*5="<<H;
    H=A/2;
    cout<<"A/2="<<H;
    return 0;
}

