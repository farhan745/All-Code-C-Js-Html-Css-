#include <bits/stdc++.h>
using namespace std;
class Complex
{
    int a, b;

public:
    void set(int x, int y)
    {
        a = x;
        b = y;
    }
    void print()
    {
        cout << a << " " << b << endl;
    }
    friend class calculator;
};

class calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    void sum(Complex o1, Complex o2)
    {
        cout << "Sum of Value is: " << (o1.a + o2.a) << " " << (o1.b + o2.b) << endl;
    }
};
int main()
{
    Complex c1, c2;
    c1.set(3, 4);
    c1.print();
    c2.set(1, 2);
    c2.print();

    calculator obj;
    obj.sum(c1, c2);
    cout << obj.add(20, 30) << endl;

    return 0;
}