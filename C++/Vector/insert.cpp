#include<bits/stdc++.h>
using namespace std;
int  main(){
vector<int>v;
v.insert(v.begin(),5);
v.insert(v.begin()+1,3);
v.insert(v.begin()+2,4);

for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
return 0;
}