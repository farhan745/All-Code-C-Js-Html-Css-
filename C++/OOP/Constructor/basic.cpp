#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    int id;
    double gpa;
    Student(int x, double y);
    Student();
};
Student :: Student(int x,double y){
    
    id=x;
    gpa=y;
    cout << "ID : "<<id<<"\nGPA : "<<gpa<<endl;
}

int  main(){
    Student S1(10, 5.00);
    
    //cout<<S1.id<<endl<<S1.gpa<<endl;
return 0;
}