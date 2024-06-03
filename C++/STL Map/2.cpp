#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int  main(){
optimize();
vector<long long>v={1,101020202029299,2662772737838,101020202029299};
map<long long,int>count;
for(int i=0;i<v.size( );i++){
     count[v[i]] ++;
}
cout<<count[101020202029299]<<endl;
cout<<"============================\n";
//Now use string and integer
map<string,int>id;
id["shah"]=1;
id["momo"]=3;
id["shorif"]=5;
id["prety"]=6;
id["dima"]=9;
for(auto u:id)cout<<u.first<<" "<<u.second<<endl;
cout<<"============================\n";
map<int,string>id1;
id1[3]="shorif";
id1[2]="momo";
id1[6]="dima";
id1[4]="shorif";
id1[5]="prety";
id1[1]="Farhan";
for(auto u:id1){
     cout<<u.first<<" "<<u.second<<endl;
}
return 0;
}