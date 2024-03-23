#include<bits/stdc++.h>
using namespace std;
class Base{
    int a,b;
    public:
    Base(int i,int j):a(i),b(a+j){ 
        cout<<"Base constructor called\n";
        cout<<"Value of a & b: "<<a<<" "<<b<<endl;
    }
};
int  main(){
    Base b(10,20);
return 0;
}