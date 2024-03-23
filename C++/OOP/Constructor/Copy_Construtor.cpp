#include <bits/stdc++.h>
using namespace std;
class value
{
    int a;

public:
    value(){};
    value(int n)
    {
        a = n;
    }
    value(value &obj)
    {
        a = obj.a;
    }
    void print()
    {
        cout << "The Number Is: " << a << endl;
    }
};

int main()
{
    // creating object of class 'value' using
    value a, b, obj1(5); // calling constructor with parameterized constructor
    a.print();
    b.print();
    obj1.print();
    cout << "Copy Constructor" << endl;
    value obj2(obj1); // calling copy constructor to create
    obj2.print();     // another object from the first one
    return 0;
}