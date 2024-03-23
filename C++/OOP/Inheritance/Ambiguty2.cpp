#include <bits/stdc++.h>
using namespace std;
class Base1
{

public:
    void say()
    {
        cout << "Whats up" << endl;
    }
};
class Base2
{

public:
    void say()
    {
        cout << "How are you" << endl;
    }
};
class Derived : public Base2
{

public:
    void say()
    {

        cout << "Thats a beautiful day" << endl;
    }
};
int main()
{
    //    Base1 obj1;
    //    Base2 obj2;
    //    obj1.say();
    //    obj2.say();
    Derived D;
    D.say();
    return 0;
}