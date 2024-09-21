#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
class Base{
    protected:
    int x;
public:
Base(int x):x(x){}
virtual void get()=0;//Pure Virtual Function//Abstract Class
};
class Derived1:public Base{
public:
Derived1(int x):Base(x){}
void get(){
    cout<<"Derived1 : "<<x<<endl;
}
};
class Derived2:public Base{
public:
Derived2(int x):Base(x){}
void get(){
    cout<<"Derived2 : "<<x<<endl;
}
};

int  main(){
optimize();
Base *ptr[2];
Derived1 d1(30);
Derived2 d2(60);
ptr[0]=&d1;
ptr[1]=&d2;
for(int i=0;i<2;i++){
    ptr[i]->get();
}

return 0;
}