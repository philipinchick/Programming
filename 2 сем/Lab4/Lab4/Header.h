#ifndef header_h
#define header_h
#include <iostream>
using namespace std;
struct List{
    string data;
    List* next;
};

class palma {
private:
    
    List* front = nullptr;
    List* rear = nullptr;
public:
    void push(string x);
    void pop();
    void output();
};

#endif /* header_h */
