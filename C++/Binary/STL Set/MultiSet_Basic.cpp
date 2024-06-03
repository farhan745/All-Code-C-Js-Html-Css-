#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int  main(){
optimize();
  multiset<int>s;
  s.insert(1);
  s.insert(2);
  s.insert(1);
  s.insert(3);
  s.insert(1);
  s.insert(4);
  s.insert(1);
  s.insert(4);
  cout<<"Size of Set: "<<s.size()<<endl;
  for(auto u:s)cout<<u<<" ";
  cout<<"\nCount: "<<s.count(1)<<endl;
  cout<<"Erase: ";
  s.erase(1);
  for(auto u:s)cout<<u<<" ";
  cout<<endl;
  
return 0;
}