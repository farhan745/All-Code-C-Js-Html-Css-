#include <bits/stdc++.h>
using namespace std;
class value
{
    int a, b;

public:
    value(int, int);
    void print()
    {
        cout << a << " " << b << endl;
    }
};
value :: value(int x, int y = 15)
{
    a = x;
    b = y;
}
int main()
{
    
    cout<<"Before Default Construtor"<<endl;
    value  obj1(40, 60);
    obj1.print();
    cout<<"After Default Construtor"<<endl;
    value obj2(30);
    obj2.print();
    return 0;
}