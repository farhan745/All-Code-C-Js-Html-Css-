#include <bits/stdc++.h>
using namespace std;
class A
{
    int a;

public:
    void set(int a) { 
        this->a = a; 
        }
    /*
    A & set(int a) { 
        this->a = a;    //this ambercent this pointer
        return *this;
        }
    */
    void get()
    {
        cout << "The Value of a is: " << a << endl;
    }
};
int main()
{
    A a;
    a.set(10);
    a.get();

    A *ptr=&a;
    ptr->set(5); // setting the value of 'a' to 5
    ptr->get();  // getting the value of 'a', which should be 5

    return 0;
}