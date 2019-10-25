#include <iostream>

using namespace std;

class MyVector
{
private:
    double *a;
    int n;
public:
    MyVector();
    MyVector(int x);
    MyVector( MyVector&X);
    ~MyVector();
    MyVector operator +(const MyVector&X);
    MyVector operator *(const MyVector&X);
    void operator ~();
    bool IsSizeEqual(const MyVector&X);
    friend ostream& operator <<(ostream& s, const MyVector&X);
    friend istream& operator >>(istream& s, MyVector&X);
    
};

MyVector::MyVector()
{
    n=0;
    a=new double[1];
}

MyVector::~MyVector()
{
    delete[]a;
}
MyVector::MyVector(int x)
{
    n=x;
    a=new double[n];
}
MyVector::MyVector(MyVector&X)
{
    n=X.n;
    a=new double[n];
    for(int i=0; i<n; i++)
        a[i]=X.a[i];
}
MyVector MyVector::operator +(const MyVector&X)
{
    MyVector H(*this);
    if(IsSizeEqual(X))
        for (int i=0; i<n;i++)
            H.a[i]+=X.a[i];
    return H;
}
bool MyVector::IsSizeEqual(const MyVector&X)
{
    if(n==X.n)
        return true;
     return false;
}
void MyVector::operator ~()
{
    for(int i=0; i<n; i++)
        a[i]=-a[i];
}
MyVector MyVector::operator *(const MyVector&X)
{
    MyVector H(*this);
    if(IsSizeEqual(X))
        for (int i=0; i<n;i++)
            H.a[i]*=X.a[i];
    return H;
}
istream& operator >>(istream& s, MyVector&X)
{
    for(int i=0; i<X.n; i++)
        s>>X.a[i];
    return s;
}
ostream& operator <<(ostream& s, const MyVector&X)
{
    for(int i=0; i<X.n; i++)
        s<<X.a[i]<<" ";
    s<<endl;
    return s;
}

int main()
{
    int n;
    cout<<"введите число векторов ";
    cin>>n;
    MyVector vec(n);
    cin>>vec;
    MyVector vec1(vec);
    ~vec;
    cout<<vec+vec;
    cout<<vec*vec1;
    return 0;
}
