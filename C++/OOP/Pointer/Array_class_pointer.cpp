#include <bits/stdc++.h>
using namespace std;
class Shop
{
    int id;
    float  price;

public:
    void getData()
    {
        cout << "Enter the product ID : "<<id<<endl;
        cout<<"Price of this item: "<<price<<endl;
    }
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }
};

int main()
{

    int Sz=2;
    Shop *ptr = new Shop[Sz]; // WIthout obj using using "new  ___"method
    Shop *ptrtemp =  ptr;     // Creating temporary pointer to store address
    int p;
    float q;
    for (int i = 0; i < Sz; i++)
    {
        
        cin>>p>>q;
        ptr->setData(p,q);
        ptr++;
    }
    for (int i = 0; i < Sz; i++)
    {
        
        ptrtemp->getData();
        ptrtemp++;
    }
    
    
    return 0;
}