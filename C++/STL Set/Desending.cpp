#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int  main(){
optimize();
  set<int,greater<int>>s;
 s.insert(1);
 s.insert(1);
 s.insert(3);
 s.insert(4);
 s.insert(2);
 s.insert(3);
 s.insert(2);
 cout<<s.size()<<endl;
 for(auto it:s){
    cout<<it<<endl;
 }
 //string
 set<string,greater<string>>ss;
 ss.insert("Shahriar");
 ss.insert("Farhan");
 ss.insert("Zawad");
 ss.insert("Momo");
 ss.insert("Zishan");
 ss.insert("Shahriar");
 ss.insert("Momo");
 cout<<s.size()<<endl;
 for(auto u:ss){
    cout<<u<<endl;
 }
  
return 0;
}