#include <iostream>

using namespace std;

struct Node
{
    Node *prev;
    string S;
    Node *next;
};

class List
{
private:
    Node *head;
public:
    //конструктор
    List()
    {
        head=new Node;
        head->next=head->prev=head;
    }
    //деструктор
    virtual ~List()
    {
        Node *p=head->next;
        while (p!=head)
        {
            Node *next=p->next;
            delete p;
            p=next;
        }
        delete head;
    }
    //вставка строки в конец списка
    void push(string S)
    {
        Node *p=head->prev;
        p->prev->next=p->next;
        p->next->prev=p->prev;
        delete p;
    }
    //удаление в конце
    void pop()
    {
        Node *p = head->prev;
        p->prev->next = p->next;
        p->next->prev = p->prev;
        delete p;
    }
};


int main()
{
    int action =0;
    cout<<"1. посмореть состояние очереди"<<endl;
    cout<<"2. добавить элемент"<<endl;
    cout<<"3. удалить элемент"<<endl;
    cout<<"4. выход из программы"<<endl;
    cin>>action;
    List x;
    switch(action)
    {
        case 1:
        
            break;
        case 2:
            x.push("grege");
            break;
        case 3:
            x.pop();
            break;
        case 4:
            
        
    }
    
}
