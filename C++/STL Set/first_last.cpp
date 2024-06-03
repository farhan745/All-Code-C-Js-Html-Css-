#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int  main(){
optimize();
  set<int>s;
  int t=3;
  while(t--){
    int a;
    cin>>a;
    s.insert(a);
  }
  cout<<"First Elements: "<<*(s.begin())<<endl;
  cout<<"Last Elements: "<<*(s.end())<<endl;
  //Earse
  s.erase(2);
  cout<<"Size=> "<<s.size()<<endl<<"After Erase=> ";
  for(auto u:s){
    cout<<u<<" ";
  }
  
return 0;
}