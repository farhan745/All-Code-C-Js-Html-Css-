#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int  main(){
optimize();
map<int,bool>vis;
vector<int>v={2,2,1,1,3};
for(auto u:v)vis[u]=true;
for(auto u:vis)cout<<u.first<<" "<<u.second<<endl;
cout<<"====================\n";
//Reverse sorted  map
unordered_map<int,bool>vis1;
vector<int>v1={2,2,1,1,3};
for(auto u:v1)vis1[u]=false;
for(auto u:vis1)cout<<u.first<<" "<<u.second<<endl;
return 0;
}