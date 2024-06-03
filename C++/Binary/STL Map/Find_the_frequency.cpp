//https://www.geeksforgeeks.org/problems/find-the-frequency/1   [this is problem link]
#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int findFrequency(vector<int> &v, int n)
{
    map<long long, int> cnt;
    for (auto u : v)
        cnt[u]++;
    return cnt[n];
}
int  main(){
optimize();
    vector<int>v={2,3,4,2,4,5,2,1,3,6,2};
    int n;cin>>n;
    cout<<findFrequency(v,n)<<endl;//it will print the frequency of number 4 in array which is 2
return 0;
}