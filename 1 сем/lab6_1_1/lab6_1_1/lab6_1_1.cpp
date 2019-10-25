#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int m ,b,c,a=0,t=0;
    char str[100];
    gets(str);
    b = strlen(str);
    c = b;
    
    for (m = 0; m < b; m++, c--)
    {
        if (str[m]==str[c-1])
            a=true;
        else
        {   t=false;
            //cout<<"NO"<<endl;
            break;
        }
    }
    if (a==true)
        cout<<"YES"<<endl;
    if ((t==false) && (a!=true))
        cout<<"NO"<<endl;
    return 0;
}
