#include<bits/stdc++.h>
using namespace std;

int  main(){
    int a=15;
    int *ptr;
    ptr=&a;
    cout<<"Value of variable a is :"<<*ptr<<endl;
    
    int *p=new int(50);
    cout<<"Value stored in the memory allocated by new operator: "<<*p<<endl;

    float *b=new float(40.75);
    cout<<"Dereferencing pointer to float: "<<*b<<endl;

    int *arr=new int[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    delete[] arr;
    cout<<"The Value of arr[0]: "<<arr[0]<<endl;
    cout<<"The Value of arr[1]: "<<arr[1]<<endl;
    cout<<"The Value of arr[2]: "<<arr[2]<<endl;

return 0;
}