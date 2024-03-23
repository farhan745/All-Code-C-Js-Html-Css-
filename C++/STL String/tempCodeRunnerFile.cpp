#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);//[Make more Fastest(cin,cout)]
#define endl '\n'
int  main(){

    optimize();
    
    string s="deacbAAA";
    s.erase(s.begin());//O(n)
    cout<<s<<endl;
    string t="deacbAAA";
    t.erase(t.end());//O(n)
    cout<<t<<endl;
return 0;
}