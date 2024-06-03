#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int  main(){
optimize();
map<string,int>id;
id["Farhan"] = 1;
id["Akash"]=3;
id["Rohan"]=4;
id[ "Saurabh"]=97;

cout<<id["Saurabh"]<<endl;
cout<<id["Farhan"]<<endl;
cout<<id["Akash"]<<"\n";
cout<<endl;

map<string,string>gender;
gender["Akash"] = "Male";
gender["Ohi"]="Female";
gender["Rabeya"]="Female";
gender[ "Saurabh"]="Male";

cout<<gender["Saurabh"];
cout<<gender["ohi"]<<endl;
cout<<gender["Akash"]<<endl;
cout<<gender["Rabeya"]<<endl;
return 0;
}