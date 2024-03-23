#include <bits/stdc++.h>
using namespace std;
class Employee
{
public:
    int id;
    float salary;
    void set(int x,float y)
    {
        id = x;
        salary=y;
    }
    
};
class Program : public Employee
{
    public:
    Program(int n){
        id=n;
    }
    int lancode=10;
    void getData(){
        cout<<"Id: "<<id<<endl;
    }
};
int main()
{
    Employee p1,p2;
    p1.set(5,15000);
    cout<<"Id: "<<p1.id<<endl<<"Salery: "<<p1.salary<<endl;
    p2.set(6,30000);
    cout<<"Id: "<<p2.id<<endl<<"Salery: "<<p2.salary<<endl;
    Program obj(7);
    cout<<"Langauge Code: "<<obj.lancode<<endl;
    obj.getData();
    return 0;
}