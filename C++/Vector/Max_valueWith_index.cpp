#include <bits/stdc++.h>
using namespace std;
/*Here Catch only Max value*/
int main()
{
    vector<int> v = {2, 3, 5, 5, 7,8,10};
    vector<int>::iterator it=max_element(v.begin(), v.end());
    
    int n=max_element(v.begin(), v.end()) - v.begin();
    cout<<"Index: "<<n<<endl;
    cout << "The maximum element is :";
    cout<<*it<<endl; //prints the maximum element of array
    return 0;
}