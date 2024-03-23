#include <bits/stdc++.h>
using namespace std;
/*
Student-->Test
Student-->Sport
Test-->Result
Sport-->Result
*/
class Student
{
protected:
    int roll;

public:
    void setdata(int r)
    {
        roll = r;
    }
    void print()
    {
        cout << "Roll No : " << roll << endl;
    }
};
class Test : public virtual Student
{
protected:
    float math, physic;

public:
    void set_mark(float m, float p)
    {
        math = m;
        physic = p;
    }
    void show_mark()
    {
        cout << "Maths Marks : " << math << endl;
        cout << "Physics Marks : " << physic << endl;
    }
};
class Sport : public virtual Student
{
    protected:
    float score;
    public: 
    void set_score(float s)
    {
        score=s;
    }
    void show_score()
    {
        cout<<"Sports Score is : "<<score<<endl;    
    }
};
class Result : public Test, public Sport
{
private:
float total;
public:
void display(){
    total=math+physic+score;
    print();
    show_mark();
    show_score();
    cout<<"Total Marks are : "<<total<<endl;
    cout<<"Average  Marks are : "<<fixed<<setprecision(2)<<total/3<<endl;
}

};
int main()
{
    Result r;
    r.setdata(101);
    r.set_mark(90.5,88);
    r.set_score(76);
    r.display();
    return 0;
}