#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {2, 3, 5, 5, 7, 7, 1};
    sort(v.begin(), v.end());//O(nlog2(n))
    int Sz = unique(v.begin(), v.end()) - v.begin();//O(n)
    cout << Sz << endl;
    for (int i = 0; i < Sz; i++)
        cout << v[i] << " ";
    return 0;
}