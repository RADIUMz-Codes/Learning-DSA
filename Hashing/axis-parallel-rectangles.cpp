#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> p;
    set<pair<int, int>> s;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        pair<int, int> temp(a, b);
        p.push_back(temp);
        s.insert(temp);
    }

    for (auto x : s)
        cout << x.first << " " << x.second << endl;

    int ans = 0;
    for (int i = 0; i < n - 1; i++)
    {
        auto a = p[i];
        for (int j = i + 1; j < n; j++)
        {
            auto b = p[j];
            pair<int, int> c(a.first, b.second);
            pair<int, int> d(b.first, a.second);

            if (a != c and a != d and b != c and b != d)
                if (s.find(c) != s.end() and s.find(d) != s.end())
                    ans++;
        }
    }

    cout << "Total Rectangles = " << ans/2;
}