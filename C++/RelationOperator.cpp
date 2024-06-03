#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
class Distance{
    int f,i;
    public:
    Distance(int f=0,int i=0){
        this->f=f;
        this->i=i;
    }
    bool operator>(const Distance &obj){
         if(f>obj.f)return true;
         if(f==obj.f&&i>obj.i)return true;
         return false;
    }
    void print(){
        cout<<"Feet: "<<f<<endl<<"Inches: "<<i<<endl;
    } 
    
};
int  main(){
    Distance a(10,20),b(10,15);
    if(a>b)cout<<"a is larger \n";
    else cout<<"b is larger\n";

return 0;
}