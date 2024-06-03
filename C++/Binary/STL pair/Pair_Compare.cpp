#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int  main(){
optimize();
pair<int,int>p1,p2;
p1 = {3,1};
p2= {2,4};
if(p1<p2) cout<<"Yes\n";
else cout<<"No\n"<<endl;

//min function
pair<int,int>p=min(p1,p2);
cout<<p.first<<" "<<p.second<<"\n";
return 0;
}
/* p1 & p2 only 1st value compare 
 2ndly p1 and p2 both first value equal
 then both 2nd value is compare.
 */