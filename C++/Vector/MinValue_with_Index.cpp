#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {2, 3, 5, 5, 7, 7, 1};
    vector<int>::iterator it=min_element(v.begin(), v.end());
    
    int n=min_element(v.begin(), v.end()) - v.begin();
    cout<<"Index: "<<n<<endl;
    cout << "The Minimum element is: ";
    cout<<*it<<endl; //prints the maximum element of array
    return 0;
}