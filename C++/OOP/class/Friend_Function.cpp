#include <bits/stdc++.h>
using namespace std;
class Complex
{
private:
    int a, b;

public:
    void getData(int x, int y)
    {
        a = x;
        b = y;
    }
    void sumprint()
    {
        cout << "Sum  of the two complex numbers is : " << a + b << endl;
    }
    void display()
    {
        cout << "The value of complex number is : " << a << "+" << b << "i" << endl;
    }
    friend Complex SumComplex(Complex c1, Complex c2);
};
Complex SumComplex(Complex c1, Complex c2)
{
    Complex c3;
    c3.getData(c1.a + c2.a, c1.b + c2.b);
    return c3;
}
int main()
{
    Complex C1, C2, Sum;
    cout << "\nEnter the first complex number" << endl;
    C1.getData(5, 8);
    C1.display();
    C2.getData(10, 15);
    C2.display();
    Sum = SumComplex(C1, C2);
    Sum.display();
    return 0;
}