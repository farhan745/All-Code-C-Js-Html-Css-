#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s="Bangladesh";
    s[0]='N';
    cout<<"Size: "<<s.size()<<endl;
    cout<<"String after adding characters : "<<s<<endl;
    for(int i=0;i<s.size();i++){
        cout<<s[i]<<" ";
    }
    return 0;
}