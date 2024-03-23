#include <bits/stdc++.h>
using namespace std;
class Student
{
protected:
    int roll;
    string name;

public:
    void set_roll(int r,string n)
    {
        roll = r;
        name=n;
    }
    void get_roll()
    {
        cout<<"Name: "<<name<<endl << "Roll Number = " << roll << endl;
    }
};
class Exam : public Student
{
protected:
    float math;
    float english;

public:
    void set_marks(float m, float e) // setter function for marks
    {
        math = m;
        english = e;
    }
    void get_marks()
    {   
        cout << "Math: " << math << endl
             << "English: " << english << endl;
    }
};
class Result : public Exam
{
    float per;
public:
      void display(){
        get_roll();
        get_marks();
        cout<<"Your Percentage is: "<<(math+english)/2<<endl;
      }


};
int main()
{
    Result s1;
    s1.set_roll(10,"Farhan");
    s1.set_marks(85,76);
    s1.display();
    return 0;
}