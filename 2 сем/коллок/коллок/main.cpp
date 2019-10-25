#include <iostream>
using namespace std;
struct BadIndex {};
struct BadSize {};

class Mas
{
    int n;
    int *p;
public:
    Mas() { p = NULL; n = 0; }
    Mas(int k) { p = new int[k]; n = k; }
    Mas(const Mas&A);
    virtual ~Mas();
    
    friend istream&operator>>(istream &input, Mas &A);
    friend ostream&operator<<(ostream &output, const Mas&A);
    
    int & operator[](int index);
    Mas & operator=(const Mas&A);
    
    friend Mas operator++(const Mas&A);
    friend Mas operator++(const Mas&A, int a);
    friend Mas operator+(const Mas&A, const Mas&B);
    friend Mas operator+=(const Mas&A, const Mas&B);
    friend Mas operator-(const Mas&A, int k);
    friend Mas operator-(int k, const Mas&A);
    
    void sort();
    void delet();
    double sred();
    int min, max;
    friend void twores(const Mas&Z);
    
};

Mas::Mas(const Mas&A)
{
    p = new int[A.n];
    n = A.n;
    for (int i = 0; i < A.n; i++)
    {
        p[i] = A.p[i];
    }
}

Mas::~Mas()
{
    delete[]p;
}

istream&operator>>(istream&input, Mas &A)
{
    for (int i = 0; i < A.n; i++)
    {
        input >> A.p[i];
    }
    return input;
}

ostream&operator<<(ostream&output, const Mas&A)
{
    for (int i = 0; i < A.n; i++)
    {
        output << A.p[i] << " ";
    }
    return output;
}

int & Mas::operator[](int index)
{
    if (index < 0 || index >= n)
    {
        throw BadIndex();
    }
    return p[index];
}

Mas&Mas::operator=(const Mas&A)
{
    if (this != &A)
    {
        delete[]p;
        n = A.n;
        p = new int[n];
        
    }
    for (int i = 0; i < n; i++)
    {
        p[i] = A.p[i];
    }
    return *this;
}


Mas operator++(const Mas&A)
{
    for (int i = 0; i < A.n; i++)
    {
        ++A.p[i];
    }
    return A;
}

Mas operator++(const Mas&A, int a)
{
    Mas temp = A;
    for (int i = 0; i < A.n; i++)
    {
        temp.p[i] = A.p[i]++;
    }
    return temp;
}

Mas operator+(const Mas&A, const Mas&B)
{
    if (A.n != B.n)
    {
        throw BadSize();
    }
    Mas C(A.n);
    for (int i = 0; i < A.n; i++)
    {
        C.p[i] = A.p[i] + B.p[i];
    }
    return C;
}

Mas operator+=(const Mas&A, const Mas&B)
{
    if (A.n != B.n)
    {
        throw BadSize();
    }
    for (int i = 0; i < A.n; i++)
    {
        A.p[i] += B.p[i];
    }
    return A;
}

void Mas::sort()
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (p[j] > p[j + 1])
            {
                temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }
}

//Õ≈ –¿¡Œ“¿≈“
void Mas::delet()
{
    int k = n;
    for (int i = 0; i < k; i++)
    {
        if (p[i] % 2 == 0)
        {
            for (int i = 0; i < k - 1; i++)
            {
                p[i] = p[i + 1];
                k--;
            }
        }
    }
}

double Mas::sred()
{
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += p[i];
    }
    return sum / n;
}

void twores(const Mas&Z)
{
    int max, min;
    max = Z.p[0];
    min = Z.p[0];
    for (int i = 0; i < Z.n; i++)
    {
        if (Z.p[i] < min)
        {
            min = Z.p[i];
        }
        if (Z.p[i] > max)
        {
            max = Z.p[i];
        }
    }
    cout << min << max;
    
}

Mas operator-(const Mas&A, int k)
{
    Mas C(A.n);
    for (int i = 0; i < A.n; i++)
    {
        C.p[i] = A.p[i] - k;
    }
    return C;
}

Mas operator-(int k, const Mas&A)
{
    Mas C(A.n);
    for (int i = 0; i < A.n; i++)
    {
        C.p[i] = k - A.p[i];
    }
    return C;
}

int main()
{
    try
    {
        int a, b;
        setlocale(LC_ALL, ".1251");
        cout << "¬‚Â‰ËÚÂ ‡ÁÏÂ a";
        cin >> a;
        Mas A(a);
        cin >> A;
        
        /*cout << "¬‚Â‰ËÚÂ ‡ÁÏÂ b";
         cin >> b;
         Mas B(b);
         cin >> B;
         
         A = B + A;
         cout << A << endl;
         
         A.sort();
         cout << A << endl;
         
         A.delet();*/
        //cout<<A.sred();
        
        //cout << A << endl;
        twores(A);
        A = 1-A;
        cout << A << endl;
        
        system("pause");
    }
    catch (BadIndex)
    {
        cout << "Error";
    }
    catch (BadSize)
    {
        cout << "Error";
    }
}
