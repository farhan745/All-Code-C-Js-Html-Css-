#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int  main(){
optimize();
//Sort
cout<<"Pair of Vector: \n";
vector<pair<int,int>>v;
v.push_back({6,5});
v.push_back({2,3});
v.push_back({4,5});
v.push_back({6,1});
//v.push_back({1,9});
sort(v.rbegin(), v.rend());
for(auto i : v) cout << "{" << i.first << "," << i.second<<"}"<<endl;
cout<<"Pair of Array: \n    ";

pair<int,int>p[]={{6,5},{2,3}, {4,5},{6,1},{1,9}}; // pair of pairs
sort(p,p+5);
for(int i=0 ;i<5;i++) cout << "{" << p[i].first << "," << p[i].second<<"} ";

return 0;
}