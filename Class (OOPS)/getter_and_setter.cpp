#include <bits/stdc++.h>
using namespace std;


class Car {
private:
    int price;
public:
    int model;
    string name;

    void print()
    {
        cout<<"Car name = "<<name<<endl;
        cout<<"Model = "<<model<<endl;
        cout<<"Price = "<<price<<endl<<endl;
    }

    //setter
    void set_price(int p)
    {
        price=111;
        if(p>0)
            price=p;
    }
    
    //getter
    int get_price()
    {
        return price;
    }
};

int main()
{
    Car c1;
    Car c2;
    c1.name="Maruti";
    c1.set_price(10);
    c1.model=4545;

    c2.name="Toyota";
    c2.set_price(-10);
    c2.model=45565;
    
    c1.print();
    c2.print();

    return 0;
}