#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int max = 0, min = 0;
    if (c > a && c > b && b > a)
    {
        max = c;
        min = a;
        cout << min << " " << max << endl;
    }
    else if (a > b && a > c && b > c)
    {
        max = a;
        min = c;
        cout << min << " " << max << endl;
    }
    else if(b > a && b > c &&  a > c)
    {
        max = b;
        min = c;
        cout << min << " " << max << endl;
    }
    return 0;
}