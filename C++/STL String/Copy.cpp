#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int  main(){
optimize();
string s ="Shahriar";
string t="gada alam gada";
copy(t.begin()+4,t.begin()+9,back_inserter(s));
cout<<s<<endl;
return 0;
}