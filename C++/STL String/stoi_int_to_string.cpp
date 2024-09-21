#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
    optimize();

    string s="345";
    cout<<"The original string is : "<<s<<endl;
    int a=stoi(s);//string to integer
    cout<<"After Convert string to integer: "<<a<<endl;
    a+=10;
    cout<<a<<endl;
return 0;
}
/*->[to_string]<- uses to convert integer to string*/