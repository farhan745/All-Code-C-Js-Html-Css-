#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7};
    vector<int>::iterator it;
    
    int first_Digit = *v.begin();
    int last_DIgit = *(v.end() - 1);/*Iterator ALways a pointer.*/
    cout<<first_Digit<<" "<<last_DIgit<<endl;
    for(it=v.begin();it!=v.end();it++){
        cout<<*it<<endl;
    }

    return 0;
}