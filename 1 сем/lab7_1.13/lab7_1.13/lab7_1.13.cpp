 #include <string.h>
#include <iostream>
using namespace std;
struct MyStruct
{   int H=0;
    char A[4];
    int B[4];
    int C[4];
};
void GetData(MyStruct *obj, int n)
{   cin.ignore();
    for (int i = 0; i < n; i++)
    {
        cout << "шифр";
        cin.getline(obj[i].A, 4);
        cout<<endl;
        cout << "план";
        for (int r=0; r<4; r++)
        {
        cin >> obj[i].B[r];
            cin.ignore();
        }
        cout<<"\t";
        cout << "выполнено";
        for (int r=0; r<4; r++)
        {
        cin >> obj[i].C[r];
            cin.ignore();
        }
    }
}
void ShowData(MyStruct *obj, int n)
{ 
    for (int i = 0; i < n; i++)
    {
        cout<<"шифр:"<<" ";
        cout << obj[i].A<<"\t";
        cout<<"план:"<<" ";
        for (int r=0; r<4; r++)
        cout << obj[i].B[r]<<"\t";
        cout<<"выполнено:"<<" ";
        for (int r=0; r<4; r++)
        cout << obj[i].C[r]<<"\t";
        cout<< obj[i].H;
        cout<<endl;
    }
    for(int k=0; k<n; k++)
    {
    for (int i=0; i<n-k; i++)
    {
        if (obj[i].H>obj[i+1].H)
            swap(obj[i], obj[i+1]);
    }
    }
}
void Sortir(MyStruct *obj, int n)
{
    for (int i=0; i<n; i++)
    {
        for(int r=0; r<4; r++)
        {
            if (obj[i].C[r]>obj[i].B[r])
                obj[i].H++;
        }
    }
}
int main()
{   int n;
    cin>>n;
    MyStruct *obj = new MyStruct[n];
    GetData(obj, n);
    Sortir(obj,n);
    ShowData(obj, n);
    return 0;
}


