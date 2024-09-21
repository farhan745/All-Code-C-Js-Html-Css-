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
class Derived:public Base{
public:
Derived(int x):Base(x){}
void get(){
    cout<<"Derived "<<x<<endl;
}
};

int  main(){
optimize();
Base *ptr=new Derived(10);

ptr->get();
return 0;
}