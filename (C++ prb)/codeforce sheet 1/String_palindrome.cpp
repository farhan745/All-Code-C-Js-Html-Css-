#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int  main(){
optimize();
string s,s2;

cin>>s;
s2=s;
reverse(s.begin(),s.end());
if(s==s2)cout<<"Palindrome"<<endl;
else cout<<"Not Palindrome"<<endl;
return 0;
}