#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);//[Make more Fastest(cin,cout)]
#define endl '\n'
int  main(){

    optimize();
    int a ;
    cin>>a;
    for(int i=1;i<=a;i++){
    string s1;
     char c;//
     cin>>c;
    getline(cin,s1);/*[Get String Input] *///Take the first line as input and store it in variable 's1'.
    //getline(cin,s2) will take second line of input.
    s1=c+s1;
    cout<<s1<<" ";
    }
return 0;
}