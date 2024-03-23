#include<bits/stdc++.h>
using namespace std;
class Student{
    int id;
    double gpa;
    public:
    void set(int ,double );
    void print();
}S1;
void Student::set(int x,double y){
    id=x;
    gpa=y;

}
void Student :: print(){
    cout << "ID : "<<id<<"\nGPA : "<<gpa<<endl;
}
int  main(){
    S1.set(251,4.8);
    S1.print();
    //cout<<S1.id<<endl<<S1.gpa<<endl;
return 0;
}