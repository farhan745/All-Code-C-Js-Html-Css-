#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int  main(){
optimize();
pair<string,vector<int>>p;//declear string and vector
pair<int,int>q;
q.first=1;
q.second=2;
cout<<q.first<<" "<<q.second<<endl;
p.first="Shahriar";
p.second={1,2,3};
cout<<"String: "<<p.first<<endl;
cout<<"Vector: ";
for(auto u: p.second) cout<<u<<" ";
return 0;
}