#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int  main(){
optimize();
   set<int>s={1,1,3,3,2,2,0,0};
   cout<<s.size()<<endl;
   for (auto u:s){
    cout<<u<<" ";
   }
return 0;
}