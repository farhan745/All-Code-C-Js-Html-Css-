#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
bool cmp(const pair<int,int>&p1, const pair<int,int>&p2){
    if(p1.first>p2.first) return true;//ja ase tao return korbe.bcz 1 =true
    else if(p1.first == p2.first) return(p1.second < p2.second); //same priority ta return korbe
    return 0; //different priority ta return korbe
}
int  main(){
optimize();
int n,m;
cin>>n>>m;//m hosse 1 base
vector<pair<int,int>> v(n);
for(int i=0;i<n;i++){
    cin>>v[i].first>>v[i].second;
}
sort(v.begin(),v.end(),cmp);
int c=0;
for(auto u:v){
    if(u==v[m-1]) c++;
}
for(auto u:v){
    cout<<u.first<<" "<<u.second<<endl;
}
cout<<c<<endl;
return 0;
}