#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int  main(){
optimize();
map<int,int>count;
vector<int>s={1,2,1,1,2,3,5,1};
for(auto u:s)count[u]++;
int n;cin>>n;
cout<<count[n]<<endl;
for(auto u:count){
    cout<<"Vector Value Is: "<<u.first<<" >> Total Elements in Vector: "<<u.second<<endl;
}
return 0;
}