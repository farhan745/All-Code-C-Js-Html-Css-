#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
class Count{
    public:
    int value;
    Count(int x=0){
        value=x;
    }
   void operator+=(int){
        value+=5;
        
    }
    void print(){
        cout<<"Value: "<<value<<endl;
    }
};
int  main(){
optimize();
Count c(5);
c+=5;

c.print();

return 0;
}