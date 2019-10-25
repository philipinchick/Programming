#include "Header.h"

d_double::d_double(): head(nullptr), tail(nullptr) {}
bool d_double::isEmpty()
{
    if((head==NULL) && (tail==NULL))
        return 1;
    else return 0;
}
void d_double::add_front()
{
    DOUBLE* tmp = new DOUBLE;
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
void d_double::add_back()
{
    DOUBLE * tmp= new DOUBLE;
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
void d_double::del_front()
{
    DOUBLE* tmp= new DOUBLE;
    if(isEmpty())
        cout<<"очередь пуста "<<endl;
    else
    {
        head=head->next;
        head->prev=nullptr;
        delete tmp;
    }
}

void d_double::del_back()
{
    DOUBLE* tmp= new DOUBLE;
    if(isEmpty())
        cout<<"очередь пуста"<<endl;
    else
    {
        head=head->prev;
        head->next=nullptr;
        delete tmp;
    }
}

void d_double::print()
{
    DOUBLE* tmp= new DOUBLE;
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


