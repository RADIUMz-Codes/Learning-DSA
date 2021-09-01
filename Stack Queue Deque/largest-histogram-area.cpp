#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int mx = 0, contri = 0;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;

    stack<int> s;
    for (int i = 0; i < n; i++)
    {
        if (s.empty() or a[i] >= a[s.top()])
        {
            s.push(i);
        }
        else
        {
            while (a[i] < a[s.top()] and !s.empty())
            {
                int tp = s.top();
                s.pop();
                if (s.empty())
                {
                    contri = a[tp] * i;
                }
                else
                {
                    contri = (i - s.top() - 1) * a[tp];
                }
                mx = max(mx, contri);
            }
            s.push(i);
        }
    }
    cout << mx;
}