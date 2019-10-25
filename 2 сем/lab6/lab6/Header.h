#ifndef header_h
#define header_h
#include <iostream>
#include <string>
using namespace std;

class Deque
{
public:
    Deque() {}
    virtual bool isEmpty();
    virtual void add_front()=0;
    virtual void add_back()=0;
    virtual void del_front()=0;
    virtual void print()=0;
    virtual void del_back()=0;
};
struct INT
{
    int data;
    INT* next;
    INT* prev;
};
class d_int: public Deque
{
    INT* head;
    INT* tail;
public:
    d_int();
    bool isEmpty();
    void print();
    void add_front();
    void add_back();
    void del_front();
    void del_back();
};
struct DOUBLE
{
    double data;
    DOUBLE* next;
    DOUBLE* prev;
};
class d_double: public Deque
{
    DOUBLE* head;
    DOUBLE* tail;
public:
    d_double();
    bool isEmpty();
    void print();
    void add_front();
    void add_back();
    void del_front();
    void del_back();
};



#endif /* header_h */
