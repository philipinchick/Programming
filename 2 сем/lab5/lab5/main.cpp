#include "Header.h"
int main()
{
    int n=0;
    cout<<"введите количество работников: ";
    cin>>n;
    cout<<endl;
    WorkerSec *X = new WorkerSec[n];
    for(int i=0; i<n; i++)
    {
        cin>>X[i];
        X[i].MoreSum();
        X[i].engeneer();
    }
    cout<<endl<<"увеличили оклад на 15%: "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<X[i];
        X[i].Rating();
    }
    cout<<endl<<"увелицили оклад по рейтингу: "<<endl;
    for(int i=0; i<n; i++)
        cout<<X[i];
    
    return 0;
}
