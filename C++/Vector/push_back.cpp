#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec1; // Declared a vector 'vec1'

    for (int i = 0; i <= 6; ++i)
    {
        // pushing elements inside the vector
        vec1.push_back(i);
    }
    // for (int i = 0; i < vec1.size(); i++)
    // {
    //     // Printing the values inside the vector
    //     cout << vec1[i] << " ";
    // }
    for(auto u : vec1){
         cout << vec1[u] << " ";
    }

    return 0;
}