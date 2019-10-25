#include "Header.h"
void palma::push(string x)
{
        cin>>x;
        List* temp = new List;
        temp->data =x;
        temp->next = nullptr;
        if(front == nullptr && rear == nullptr){
            front = rear = temp;
            return;
        }
        rear->next = temp;
        rear = temp;
}
void palma::pop()
{
    List* temp = front;
    if(front == nullptr) {
        cout<<"очередь пуста";
        return;
    }
    if(front == rear) {
        front = rear = nullptr;
    }
    else {
        front = front->next;
    }
    delete temp;
}
void palma::output()
{
    if(front==nullptr)
        cout<<"очередь пуста";
    List *temp=front;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

