#include <iostream>
#include <string>
using namespace std;

class Person{
private:
    string Surname;
    string Name;
    string otch;
    string addres;
    string sex;
    string educ;
    int born;
public:
    Person():Surname(" "), Name(" "), otch(" "), addres(" "), sex(" "), educ(" "), born(0) {}
    
    Person(string Surnam,string Nam, string otc, string se, string addre, string edu, int bor){
        Surname=Surnam;
        Name=Nam;
        otch=otc;
        addres=addre;
        sex=se;
        educ=edu;
        born=bor;
    }
    void SetData(string Surnam,string Nam, string otc, string addre, string edu, int bor, string se){
        Surname=Surnam;
        Name=Nam;
        otch=otc;
        addres=addre;
        sex=se;
        educ=edu;
        born=bor;
    }
    void SetSurname(string);
    void SetName(string);
    void SetOtch(string);
    void SetAddres(string);
    void SetEducation(string);
    void SetSex(string);
    void SetBorn(int);
    void show();
    int Born();
    string Education();
    string Sex();
    ~Person(){}
};
void Person::SetSurname(string sur)
{
    Surname=sur;
}
void Person::SetName(string nam)
{
    Name=nam;
}
void Person::SetOtch(string otc)
{
    otch=otc;
}
void Person::SetAddres(string addr)
{
    addres=addr;
}
void Person::SetEducation(string edu)
{
    educ=edu;
}
void Person::SetSex(string se)
{
    sex=se;
}
void Person::SetBorn(int bor)
{
    born=bor;
}
int Person::Born()
{
    return born;
}
string Person::Education()
{
    return educ;
}
string Person::Sex()
{
    return sex;
}
void Person::show()
{
    cout<<Surname<<" "<<Name<<" "<<otch<<" "<<addres<<" "<<educ<<" "<<sex<<" "<<born<<endl;
}
void input(Person *A, int n){
    for(int i=0; i<n; i++)
    {
        string sur,nam,otc,addr,edu,se;
        int bor;
        cout<<"Введите Фамилию ";
        cin>>sur;
        A[i].SetSurname(sur);
        cout<<"Введите имя ";
        cin>>nam;
        A[i].SetName(nam);
        cout<<"Введите отчество ";
        cin>>otc;
        A[i].SetOtch(otc);
        cout<<"Введите адрес ";
        cin>>addr;
        A[i].SetAddres(addr);
        cout<<"Введите образование ";
        cin>>edu;
        A[i].SetEducation(edu);
        cout<<"Введите пол ";
        cin>>se;
        A[i].SetSex(se);
        cout<<"Введите год рождения ";
        cin>>bor;
        A[i].SetBorn(bor);
    }
}
void Year(Person *A, int n)
{
    int x;
    cout<<"введите возраст ";
    cin>>x;
    cout<<"граждане страше "<<x<<":"<<endl;
    for(int i=0; i<n; i++)
    {
        if ((2019-A[i].Born())>x)
            A[i].show();
    }
}
void Education(Person *A, int n)
{
    cout<<"граждане с высшим образованием: "<< endl;
    string e="высшее";
    for(int i=0; i<n; i++)
    {
        if (A[i].Education()==e)
            A[i].show();
    }
    
}
void Sex(Person *A, int n)
{
    cout<<"граждане мужского пола: "<<endl;
    string s="м";
    for(int i=0; i<n; i++)
    {
        if(A[i].Sex()==s)
            A[i].show();
    }
}

int main()
{
    int n;
    cout<<"введите количество людей ";
    cin>>n;
    cout<<endl;
    Person *A= new Person[n];
    input(A, n);
    Year(A , n);
    Education(A, n);
    Sex(A, n);
    A->~Person();
    return 0;
}
