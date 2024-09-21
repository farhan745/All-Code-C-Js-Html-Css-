#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int  main(){
optimize();
char c='a';
cout<<"Boolen Check\n";
bool f1=isupper(c),f2=islower(c),f3=isspace(c);
cout<<f1<<endl<<f2<<endl<<f3<<endl;

cout<<"Upper case/Lower Case Conversion\n";
c='A';
c=tolower(c);
cout<<"Lower Case: "<<c<<endl;
c=toupper(c);
cout<<"Upper Case: "<<c<<endl;
return 0;
}