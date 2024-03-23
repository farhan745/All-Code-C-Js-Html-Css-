#include<bits/stdc++.h>
using namespace std;
int  main(){
    int Binary;
    cin>>Binary;
    int ans=0;
    int i=0;
    while(Binary!=0){
        int lastDigit=Binary%10;
        ans=ans+(lastDigit*pow(2,i));
        Binary/=10;
        i++;
        }
        cout<<"The decimal equivalent of: "<<ans<<endl;
    
return 0;
}
/*
Formula---->>>>
Binary to Decimal:
101=(1*2^2)+(0*2^1)+(1*2^0)=5+0+1=6
1101= (1*2^3) + (1*2^2) + (0*2^1)  + (1*2^0)=8+4+0+1=13
*/