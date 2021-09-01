#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a)
    {
        cin >> x;
    }
    vector<int> b(n,-1);
    stack<int> s;
    for(int i=0;i<n*2;i++)
    {
        while(!s.empty() && a[i%n]>a[s.top()])
        {
            b[s.top()]=a[i%n];
            s.pop();
        }
        s.push(i%n);
    }
    for(auto x:b)
        cout<<x<<" ";
    return 0;
}