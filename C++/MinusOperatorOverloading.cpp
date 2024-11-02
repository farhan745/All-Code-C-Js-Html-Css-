#include<iostream>

using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
class Complex{
    int real,imag;
    public:
    Complex(int r=0,int i=0){
        real=r;
        imag=i;
    }
    Complex operator -(Complex const &obj){
        Complex temp;
        temp.real=real-obj.real;
        temp.imag=imag-obj.imag;
        return temp;
    }
    void print(){
        if(imag<0)
        cout<<real<<"-"<<imag<<"i"<<endl;
        else
        cout<<real<<"+("<<imag<<"i)"<<endl;
    }

};


int  main(){
optimize();
 Complex a(5,10),b(2,3),c;
 c=a-b;
 c.print();
return 0;
}
