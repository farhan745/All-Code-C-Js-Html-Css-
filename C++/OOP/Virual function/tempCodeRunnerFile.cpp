#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
class Base{
    int x;
public:
Base(int x):x(x){}
virtual void get(){
    cout<<"Base: "<<x<<endl;
}
};
class Derived:public Base{
public:
Derived(int x):x(x){}
void get(){
    cout<<"Derived "<<x<<endl;
}
};
class Derived2:public Base{
public:
Derived2(int x):x(x){}
void get(){
    cout<<"Derived2"<<x<<endl;
}
};
int  main(){
optimize();
Base *ptr=new Base(50);
ptr->get();
ptr=new Derived(20);
ptr->get();
ptr=new Derived2(100);
ptr->get();
return 0;
}