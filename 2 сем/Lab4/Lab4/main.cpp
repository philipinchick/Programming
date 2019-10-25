#include "Header.h"
int main()
{
    int a=0, n=0;
    string x;
    palma X;
    cout<<"введите количество элементов";
    cin>>n;
    for(int i=0; i<n; i++)
        X.push(x);
    cout<<"1. посмотреть состояние очереди"<<endl;
    cout<<"2. дбавить элемент"<<endl;
    cout<<"3. удалить элемент"<<endl;
    cout<<"4. выход из программы" <<endl;
    cin>>a;
    switch(a)
    {
        case 1:
            X.output();
            cout<<endl;
            break;
        case 2:
            X.push(x);
            X.output();
            break;
        case 3:
            X.pop();
            X.output();
            case 4:
            break;
        default:
            break;
    }
    return 0;
    
}
