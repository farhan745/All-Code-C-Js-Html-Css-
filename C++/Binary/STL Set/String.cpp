#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int  main(){
optimize();
  set<string>s;
 s.insert("Shahriar");
 s.insert("Farhan");
 s.insert("Zawad");
 s.insert("Momo");
 s.insert("Zishan");
 s.insert("Shahriar");
 s.insert("Momo");
 cout<<s.size()<<endl;
 for(auto it:s){
    cout<<it<<endl;
 }
  
return 0;
}