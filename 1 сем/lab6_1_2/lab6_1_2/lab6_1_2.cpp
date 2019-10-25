//
//  main.cpp
//  lab6_1_2
//
//  Created by Анастасия Трофимчик on 12.11.2018.
//  Copyright © 2018 Анастасия Трофимчик. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    char s[100];
    gets(s);
    int z[26];
    for(int i=0;i<26;i++)
        z[i]=0;
    for(int i=0;i<strlen(s);i++)
    {if((s[i]>=65) && (s[i]<=65+25))
        z[s[i]-65]++;
    if((s[i]>=97) && (s[i]<=97+25))
        z[s[i]-97]++;
        }
    int mini=1000000000;
    for(int i=0;i<26;i++)
        if(z[i]<mini)
            mini=z[i];
    for(int i=0;i<26;i++)
        if(z[i]!=mini)
            cout<<char(i+97)<<"\t";
    return 0;
}
