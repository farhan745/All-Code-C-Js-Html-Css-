//https://www.geeksforgeeks.org/problems/find-the-frequency/1   [this is problem link]
#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int  main(){
optimize();
    vector<int>v={2,3,4,2,4,5,2,1,3,6,2};
    int n;cin>>n;
    map<long long, int> cnt;
    for (auto u : v){
        cnt[u]++;
        cout<<cnt[u]<<" ";
    }
return 0;
}