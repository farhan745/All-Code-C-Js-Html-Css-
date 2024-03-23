#include <bits/stdc++.h>
using namespace std;
void day(int n){
  if(n=0)cout<<"Sunday"<<endl;
  else if(n=1)cout<<"Monday"<<endl;
  else if(n=2)cout<<"Tuesday"<<endl;
  else if(n=3)cout<<"Wednessday"<<endl;
  else if(n=4)cout<<"Thursday"<<endl;
  else if(n=5)cout<<"Friday"<<endl;
  else if(n=6)cout<<"Saturday"<<endl;
}
int main() 
{
    int n;
    cin>>n;
    day(n);
    return 0;
}