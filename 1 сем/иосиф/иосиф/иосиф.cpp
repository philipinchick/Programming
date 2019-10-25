#include <iostream>
#include <stdlib.h>
using namespace std;
struct node
{
    int item;
    node *next;
};
typedef node *link;
int main()
{
    int i, N , M;
    cin>>N;
    cin>>M;
    link t=new node;
    t-> item=1;
    t->next=t;
    link x=t;
    for (i=2; i<=N; i++)
    {
        x=(x->next=new node);
        x->item=i;
        x->next=t;
    }
    while (x!=x->next)
    {
        for (i = 1; i<= M; i++)
            x=x->next;
        x->next=x->next->next;
    }
    cout<<"number"<<x->item<<endl<<"leader"<<endl;
    return 0;
        
}
