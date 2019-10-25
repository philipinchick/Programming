#include "Header.h"
#include "functions_int.cpp"
#include "functions_double.cpp"

int main()
{
    int s;
    cout<<"int=1; double=2"<<endl;
    cin>>s;
    d_int* X = new d_int;
    d_double* Y = new d_double;
    int n=0;
    cout<<"0. Выйти"<<endl;
    cout<<"1. Добавить впереди"<<endl;
    cout<<"2. Добавить сзади"<<endl;
    cout<<"3. Удалить впереди"<<endl;
    cout<<"4. Удалить сзади"<<endl;
    cout<<"5. Показать очередь"<<endl;
    cin>>n;
    if(s==1){
    switch(n)
        {
            case 0:
                return 0;
            case 1:
               X->add_front();
                break;
            case 2:
                X->add_back();
                break;
            case 3:
                X->del_front();
                break;
            case 4:
                X->del_back();
                break;
            case 5:
                X->print();
                break;
            default:
                cout<<"попробуй ещё"<<endl;
                break;
        }
    }
        else {
            switch(n)
            {
                case 0:
                    return 0;
                case 1:
                    Y->add_front();
                    break;
                case 2:
                    Y->add_back();
                    break;
                case 3:
                    Y->del_front();
                    break;
                case 4:
                    Y->del_back();
                    break;
                case 5:
                    Y->print();
                    break;
                default:
                    cout<<"попробуй ещё"<<endl;
                    break;
            }
        }
   

    return 0;
}
