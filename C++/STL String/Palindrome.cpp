#include<bits/stdc++.h>
using namespace std;

int  main(){
    
string s;
cin>>s;
string tmp=s;
reverse(tmp.begin(),tmp.end());
if (s==tmp) cout<<"The string is a Palindrome."<<endl;
else cout<<"The string is not a Palindrome."<<endl;
return 0;
}