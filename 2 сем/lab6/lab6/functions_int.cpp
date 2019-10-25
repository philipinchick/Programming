#include "Header.h"

d_int::d_int(): head(nullptr), tail(nullptr) {}
bool d_int::isEmpty()
{
    if((head==NULL) && (tail==NULL))
        return 1;
    else return 0;
}
void d_int::add_front()
{
    INT* tmp = new INT;
    int n;
    cout<<"введите целое число ";
    cin>>n;
    tmp->data = n;
    if(isEmpty())
    {
        head = tail = tmp;
        tmp->next = 0;
        tmp->prev = 0;
    }
    else
    tmp->next = head;
    head->prev = tmp;
    tmp->prev = nullptr;
}
void d_int::add_back()
{
    INT * tmp= new INT;
    int n;
    cout<<"введите целое число ";
    cin>>n;
    tmp->data=n;
    if(isEmpty())
    {
        head=tail=tmp;
        tmp->prev=0;
        tmp->next=0;
    }
    else
    {
        tmp->prev=tail;
        tail->next=tmp;
        tmp->next=nullptr;
    }
}
void d_int::del_front()
{
    INT* tmp= new INT;
    if(isEmpty())
        cout<<"очередь пуста "<<endl;
    else
    {
        head=head->next;
        head->prev=nullptr;
        delete tmp;
    }
}

void d_int::del_back()
{
    INT* tmp= new INT;
    if(isEmpty())
        cout<<"очередь пуста"<<endl;
    else
    {
        head=head->prev;
        head->next=nullptr;
        delete tmp;
    }
}

void d_int::print()
{
    INT* tmp= new INT;
    if(isEmpty())
        cout<<"очередь пуста";
    else
    {
     while(tmp!=nullptr)
     {
         cout<<tmp->data<<" ";
         tmp=tmp->next;
     }
        cout<<endl;
    }
}

