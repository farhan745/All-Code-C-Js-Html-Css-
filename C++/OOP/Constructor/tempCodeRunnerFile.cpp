#include <bits/stdc++.h>
using namespace std;
class value
{
    int a, b;

public:
    value(int x, int y = 15);
    void print()
    {
        cout << a << " " << b << endl;
    }
};
value ::value(int x, int y = 15)
{
    a = x;
    b = y;
}
int main()
{
    value obj(30,15);
    obj.print();

    return 0;
}