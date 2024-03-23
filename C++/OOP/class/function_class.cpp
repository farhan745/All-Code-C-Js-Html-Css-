#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    int id;
    double gpa;
    void print();
}S1;
void Student :: print(){
    cout << "ID : "<<id<<"\nGPA : "<<gpa<<endl;
}
int  main(){
    S1.id=251;
    S1.gpa=4.8;
    S1.print();
    //cout<<S1.id<<endl<<S1.gpa<<endl;
return 0;
}