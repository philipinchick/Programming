#include "Header.h"
#include<iostream>
#include<string>
using namespace std;

int main() {
    int r=1, m=0;
    List<int> LM;
    cout << "меню:\n";
    cout << "1. Добавить впереди\n2. добавить сзади\n3. первый элепент\n4. послединй элемент\n5. Удаление по знаечению\n0. Выход\n";
    
    while (r)
    {
        cout << "введите действие\n";
        cin >> r;
        switch (r)
        {
            case 1:
                cin>>m;
                LM.pushF(m);
                break;
            case 2:
                cin>>m;
                LM.pushB(m);
                break;
            case 3:try {
                cout << LM.front() << endl;
            }
                catch (int i) {
                    cout << "Ошибка " << i<<endl;
                }
                break;
            case 4:try {
                cout << LM.back() << endl;
            }
                catch (int i) {
                    cout << "Ошибка " << i<<endl;
                }
                break;
            case 5:
                cin>>m;
                LM.remove(m);
                cout << "сделано\n";
                break;
            case 0:
                cout << "пока\n";
                return 0;
                break;
            default:
                cout << "попробуй еще\n";
                break;
        }
    }
    system("pause");
    return 0;
}
