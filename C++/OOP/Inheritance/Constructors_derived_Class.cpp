#include <bits/stdc++.h>
using namespace std;
class base
{
    int data;

public:
    base(int a)
    {
        data = a;
        cout << "Called Construtor" << endl;
    }
    void print()
    {
        cout << "Value of Data:  " << data << endl;
    }
};
class base1
{
    int data1;

public:
    base1(int a)
    {
        data1 = a;
        cout << "Called base1 Constructor" << endl;
    }
    void print()
    {
        cout << "The value of data is base1: " << data1 << "\n";
    }
};
class base2
{
    int data2;

public:
    base2(int a)
    {
        data2 = a;
        cout << "Called base2 Constructor" << endl;
    }
    void print()
    {
        cout << "The value of data is base2: " << data2 << "\n";
    }
};
class derived : public base1, public base2
{
    int der1, der2;

public:
    derived(int x, int y, int a, int b) : base1(x), base2(y)
    {
        base1::print();
        base2::print();
        der1 = a;
        der2 = b;
        cout << "Calling Derived class constructor\n";
    }
    void print()
    {
        cout << "The value of derived1:  " << der1 << "\n";
        cout << "The value of derived2:  " << der2 << "\n";
    }
};
int main()
{
    derived d(1, 2, 3, 4);
    d.print();
    

    return 0;
}