#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
class count{
    public:
    int value;
    count(int x=0){
        value=x;
    }
    void operator++(){
        ++value;
        
    }void operator++(int){
        value++;
        
    }
    void print(){
        cout<<"Value: "<<value<<endl;
    }
};
int  main(){
optimize();
count c(5);
c++;
c.print();

return 0;
}