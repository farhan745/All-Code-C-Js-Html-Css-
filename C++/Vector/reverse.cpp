#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    reverse(v.begin(), v.end()); // error
    for(auto u:v) cout<<u<<" ";
    return 0;
}