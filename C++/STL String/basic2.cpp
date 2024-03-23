#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1 = "Bangladesh";
    string s2 = "Faltu";
    string s3 = "Kuddus";
    char c = ' ';
    string s = s1 + c + s2;

    s1 += c;
    s1 += s2;
    cout << s << endl;
    cout << s1 << endl;

    s3 += ' ';
    s3 += "Uddin";
    cout << s3;
    // Clear value
    s1.clear();
    cout<<s1<<endl;
    cout<<s1.empty()<<endl;//Empty have only 2 value-->true=1,false=0;
     return 0;
}