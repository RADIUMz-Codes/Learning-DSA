#include <bits/stdc++.h>
using namespace std;


class Car {
public:
    int model;
    int price;
    string name;

    void print()
    {
        cout<<"Car name = "<<name<<endl;
        cout<<"Model = "<<model<<endl;
        cout<<"Price = "<<price<<endl<<endl;
    }
};

int main()
{
    Car c1;
    Car c2;
    c1.name="Maruti";
    c2.name="Toyota";
    c1.price=1000;
    c1.model=4545;
    c2.model=45565;
    c2.price=154123;
    c1.print();
    c2.print();

    return 0;
}