#ifndef Header_h
#define Header_h
#include <iostream>
#include <string>

using namespace std;
class Worker {
protected:
    string fam;
    string pos;
    int sum;
public:
    Worker(): sum(0), fam(" "), pos(" "){}
    Worker(string A, string B, int zp)
    {
        sum=zp;
        fam=A;
        pos=B;
    }
    ~Worker(){}
    void MoreSum()
    {
        sum=sum+(sum*0.15);
    }
    void engeneer()
    {
        string temp="Иван";
        if (temp.compare(0, fam.length(), fam)!=0) //мб не работет
            pos="инженер";
        
    }
};

class WorkerSec: public Worker
{
protected:
    int rat;
public:
    WorkerSec(): Worker() {}
    WorkerSec(int R)
    {
        rat=R;
    }
    void Rating()
    {
        if((rat>60)&&(rat<70))
            sum=sum*1.20;
        if((rat>75)&&(rat<90))
            sum=sum*1.40;
        if (rat<90)
            sum=sum*1.60;
    }
    friend ostream& operator <<(ostream& s,WorkerSec&X)
    {
        cout<<X.fam<<"\t"<<X.pos<<"\t"<<X.sum<<"\t"<<X.rat<<endl;
        return s;
    }
    friend istream& operator >>(istream& s, WorkerSec&X)
    {
        cout<< "введите фамилию: ";
        cin>>X.fam;
        cout<<endl;
        cout<<"введите должность: ";
        cin>>X.pos;
        cout<<endl;
        cout<<"введите оклад: ";
        cin>>X.sum;
        cout<<endl;
        cout<<"введите рейтинг: ";
        cin>>X.rat;
        cout<<endl;
        return s;
    }
};

#endif /* Header_h */
