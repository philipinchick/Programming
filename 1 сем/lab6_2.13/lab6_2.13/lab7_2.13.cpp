#include "pch.h"
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in;
    in.open("in.txt");
    ofstream out;
    out.open("out.txt");
    int i, j, k = 0;
    cin >> i >> j;
    char *str = new char[255];
    while (in.getline( str, 255)) {
        k++;
        cout << str;
        if ((k < i) || (k > j)) {
            out << str << endl;
        }
    }
    out.close();
    
}
