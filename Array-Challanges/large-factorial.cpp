#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(1, 1);
    for (int i = 2; i <= n; i++)
    {
        int carry = 0;
        for (auto &x : v)
        {
            int prod = x * i + carry;
            x = prod % 10;
            carry = prod / 10;
        }
        while (carry)
        {
            v.push_back(carry % 10);
            carry = carry / 10;
        }
    }
    for (int i = v.size() - 1; i >= 0; i--)
    {
        cout << v[i];
    }

    return 0;
}