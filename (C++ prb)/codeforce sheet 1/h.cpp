#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int y=a/365;
    cout<<y<<" years"<<endl;
    a=a%365;
    cout<<(a/30)<<" months"<<endl;
    a=a%30;
    cout<<a<<" days"<<endl;
    
    return 0;
}