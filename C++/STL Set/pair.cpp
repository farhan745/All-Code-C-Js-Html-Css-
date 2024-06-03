#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int  main(){
optimize();
  set<pair<int,int>>s;
  s.insert({1,2});
  s.insert({1,5});
  s.insert({1,3});
  s.insert({1,4});
  s.insert({4,1});
  s.insert({1,2});
  s.insert({1,5});
  s.insert({1,4});
  s.insert({4,1});
 
 cout<<s.size()<<endl;
 for(auto it:s){
    cout<<it.first<<" "<<it.second<<endl;
 }
 //Desending
   set<pair<int,int>,greater<pair<int,int>>>ss;
   cout<<"Desending\n";
  ss.insert({1,2});
  ss.insert({1,5});
  ss.insert({1,3});
  ss.insert({1,4});
  ss.insert({4,1});
  ss.insert({1,2});
  ss.insert({1,5});
  ss.insert({1,4});
  ss.insert({4,1});
 
 cout<<ss.size()<<endl;
 for(auto i:ss){
    cout<<i.first<<" "<<i.second<<endl;
 }
  
return 0;
}