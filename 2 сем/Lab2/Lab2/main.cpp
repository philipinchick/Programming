#include <iostream>
using namespace std;

class Queue
{
private:
    int A[100];
    int front, last, count;
public:
    Queue(){
        front=last=-1;
        count=0;
    }
    bool Empty()
    {
        return last==-1 && front==-1;
    }
    bool Full()
    {
        return (last+1)%100 == front ? true : false;
    }
    void add(int k)
    {
        if(Full())
        {
            cout<<"Очередь полная"<<endl;
            return;
        }
        if (Empty())
            last=front=0;
        else last+=1;
       
        A[last]=k;
        count++;
    }
    
    int Front()
    {
        if(front==-1)
        {
            cout<<"Очередь пустая"<<endl;
            return 1;
        }
        else return A[front];
    }
    void Vyvod()
    {
        cout<<"очередь:"<<endl;
        for (int i=0; i<count; i++)
        {
            int n=(front+i)%100;
            cout<<A[n]<<" ";
        }
    }
        int GetCount()
        {
            return count;
        }
    
        int Znachen(int i)
        {
            return A[front+i];
        }
    
    void Remove()
    {
        if (Empty())
        {
            cout<<"Очередь пустая"<<endl;
            return;
        }
        else
        {
            if (front==last)
                front=last=-1;
            else for(int i=1; i<count; i++ )
                A[i-1]=A[i];
        }
        last-=1;
        count--;
    }
    

    ~Queue()
{
    
}
};
bool Differ( Queue& A, Queue& B)
{
    if(A.GetCount()!=B.GetCount())
        return false;
    else {
    for(int i=0; i<A.GetCount(); i++)
    {
        if (A.Znachen(i)!=B.Znachen(i))
            return false;
    }
    }
    return true;
}
int main()
{
    Queue Q, B;
    Q.add(4);
    Q.add(6);
    Q.add(8);
    B.add(4);
    B.add(5);
    Q.Remove();
    if (Differ(Q, B))
        cout<<"очереди одинаковы"<<endl;
    else
        cout<<"очереди разные"<<endl;
    Q.Vyvod();
}
