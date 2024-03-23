#include<bits/stdc++.h>
using namespace std;
int  main(){
    int Decimal;
    cin>>Decimal;
    int ans=0;
    int i=1;
    while(Decimal!=0){
        int PN=Decimal%2;
        //cout<<PN<<" ";
        ans+=PN*i;
        i*=10;
        Decimal/=2;
        cout<<Decimal<<" ";
        }
        cout<<"\nThe decimal equivalent of: "<<ans<<endl;
    
return 0;
}
