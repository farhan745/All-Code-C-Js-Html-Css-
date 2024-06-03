//https://codeforces.com/contest/4/problem/C
#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int  main(){
optimize();
    vector<string>v;
    int n;cin>>n;
    while(n--){
        string s;cin>>s;
        v.push_back(s);
    }
    map<string, int> cnt;
    for (auto u : v){
        cnt[u]++;
        if(cnt[u]==1)cout<<"OK\n";
        else cout<<u<<cnt[u]-1<<"\n";
    }
return 0;
}