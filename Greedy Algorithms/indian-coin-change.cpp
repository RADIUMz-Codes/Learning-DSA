#include <bits/stdc++.h>
using namespace std;

int make_change(int *coins, int n, int money)
{
    int c =0;
    while (money > 0)
    {   c++;
        int i = upper_bound(coins,coins+n,money)-1-coins;
        cout<<coins[i]<<" + ";
        money-= coins[i];
    }return c;
}

int main()
{
    int n;
    cin >> n;
    int coins[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};
    int t = sizeof(coins) / sizeof(int);
    int c = make_change(coins,t,n);
    cout<<"\ntotal coins = "<<c;
    return 0;
}