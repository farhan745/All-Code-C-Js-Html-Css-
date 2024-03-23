#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);//[Make more Fastest(cin,cout)]
#define endl '\n'
int  main(){

    optimize();
    
    string s="deacbA";
sort(s.begin(),s.end());
cout<<s<<endl;
sort(s.rbegin(),s.rend());
cout<<s<<endl;
return 0;
}