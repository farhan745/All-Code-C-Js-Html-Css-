#include <bits/stdc++.h>
using namespace std;
class Base1
{
protected:
    int base1int;
public:
    void set_base1(int n){
        base1int=n;
    }
};
class Base2 
{
protected:
    int base2int;
public:
    void set_base2(int n){
        base2int=n;
    } 
};
class Derived : public Base1,public Base2
{
   
public:
    void show(){
        cout<<"The value of: "<<base1int<<endl;
        cout<<"The value of: "<<base2int<<endl;
        cout<<"The sum of: "<<base1int+base2int<<endl;
        cout<<"The Average is: "<<(base1int+base2int)/2<<endl;
    }


};
int main()
{
   Derived d;
   d.set_base1(5);
   d.set_base2(7);
   d.show();
    return 0;
}