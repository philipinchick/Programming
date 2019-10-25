#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    string space = " ";
    cout << "введите строку " << endl;
    getline(cin, str);
    if (str[str.length()] != ' ') str.insert(str.length(), space);
    cout << endl;
    for (int i = 0, h = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            str.insert(i+1, to_string(h));
            str.insert(i+1+to_string(h).length(), space);
            h = 0;
            i += 1 + to_string(h).length();
            continue;
        }
        h++;
    }
    cout << str << endl;
    return 0;
    
}

