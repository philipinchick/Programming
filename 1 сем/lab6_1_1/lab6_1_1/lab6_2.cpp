#include <iostream>
using namespace std;
int main()
{
    int a, b = 0, sum = 0, sum1 = 0, sum2 = 0;
    char str[100];
    gets(str);
    if (strlen(str) == 13)
        a = true;
    else a = false;
    b = strlen(str);
    for (int i = 0; i < b; i+=2)
        sum += str[i];
    sum = sum % 10;
    for (int i = 1; i < b; i+=2)
        sum1 += str[i];
    sum1 = sum1 % 10;
    sum2 = sum + sum1;
    if (sum2 % 10 == 0)
        a = true;
    else a = false;
    if (a == true)
        cout << "OK" << endl;
    else cout << "NO" << endl;
    system("pause");
    return 0;
}
