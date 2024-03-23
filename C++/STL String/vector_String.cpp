#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);//[Make more Fastest(cin,cout)]
#define endl '\n'
int  main(){

    optimize();
    
   vector<string>v;
   v.push_back("Shahriar ");
   v.push_back("Iqbal, ");
   v.push_back("emon");
   v.push_back("Mubarrat");
   v.push_back("Nissan");
   v.push_back("Obaidul");
   v.push_back("Rabbi");
   cout<<"The Vector is : ";
   sort(v.begin(),v.end()); //sort

    for (auto i: v) {
        cout <<i<< endl;
    }
 
 cout<<endl;
return 0;
}