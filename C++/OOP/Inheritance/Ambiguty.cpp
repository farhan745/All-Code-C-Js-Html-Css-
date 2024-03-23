#include <bits/stdc++.h>
using namespace std;
class Base1
{

public:
    void show(){
        cout<<"Whats up";
    }
};
class Base2 
{

public:
    void show(){
        cout<<"How are you";
    } 
};
class Derived : public Base1,public Base2
{
   
public:
void show(){
    Base2::show();
    cout<<endl;
    Base1::show();
}


};
int main()
{
//    Base1 obj1;
//    Base2 obj2;
//    obj1.show();
//    obj2.show();
   Derived D;
   D.show();
    return 0;
}