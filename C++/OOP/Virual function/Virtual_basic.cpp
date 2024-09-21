#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
class Base{
public:
virtual void get(){
    cout<<"Base  "<<endl;
}
};
class Derived:public Base{
public:
void get(){
    cout<<"Derived "<<endl;
}
};
int  main(){
optimize();
Base *ptr=new Base;
ptr->get();
ptr=new Derived;
ptr->get();
return 0;
}