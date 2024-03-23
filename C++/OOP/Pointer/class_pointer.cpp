#include <bits/stdc++.h>
using namespace std;
class Complex
{
    int real, imaginary;

public:
    void getData()
    {
        cout << "Enter the Real part : " << real << endl;
        cout << "Enter the Imaginary part : " << imaginary << endl;
    }
    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }
};

int main()
{
    Complex c1;
    Complex *ptr = &c1;
    cout << 1 << endl;
    ptr->setData(1, 50); /*"->","(*___)" it is pointer symbol*/
    ptr->getData();
    cout << 2 << endl;

    Complex *pt = new Complex; // WIthout obj using using "new  ___"method
    pt->setData(5, 100);
    pt->getData();
    cout << 3 << endl;

    Complex b;
    Complex *p = &b;
    (*p).setData(20, 75);
    (*p).getData();
    cout << endl;

    Complex *a = new Complex[4]; // WIthout obj using using "new  ___"method
    a->setData(1,50);
    a->getData();
    
    return 0;
}