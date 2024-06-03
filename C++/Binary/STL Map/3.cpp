#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int  main(){
    optimize();
    int n;
    cin>>n; 
    
    while(n--){
        int a,b;cin>>a>>b;
    map<pair<int,int>,bool>mp;
    bool done=1;
        while (b--){
            int x,y;
            cin>>x>>y;
            if(mp[{x,y}]==1){
                done=0;
            }
            done=1;
        }
    }
    return 0;
}