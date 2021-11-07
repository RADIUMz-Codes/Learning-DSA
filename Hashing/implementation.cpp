#include <bits/stdc++.h>
#include "hashtable.h"
using namespace std;
int main()
{
    Hashtable<int> price_menu;

    price_menu.insert("B",120);
    price_menu.insert("A",20);
    price_menu.insert("Z",10);
    price_menu.insert("AA",130);
    price_menu.insert("BHJ",300);
    price_menu.insert("JY",600);
    price_menu.insert("QW",5);
    price_menu.insert("UI",560);

    price_menu.print();

    int* price = price_menu.search("UI");
    if(price != NULL){
        cout<< *price<<endl;
    }
    else {
        cout<<"Not Found"<<endl;
    }
}