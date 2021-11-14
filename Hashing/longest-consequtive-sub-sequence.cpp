#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &x : arr)
        cin >> x;
    unordered_map<int, int> m;
    int max_lenght = 0;
    for (auto x : arr)
    {
        if(m.find(x) != m.end()) continue;

        m[x] = 1;
        if (m.find(x - 1) != m.end())
        {
            int r = m[x - 1];
            m[x - r] = r + 1;
            m[x] = r + 1;
        }

        if (m.find(x + 1) != m.end())
        {
            int l = m[x + 1];
            int r = m[x];
            m[x + l] = m[x] + l;
            m[x - r +1] = m[x + l];
            m[x] = m[x+l];
        }

        max_lenght = max(max_lenght,m[x]);
    }
    cout << "Max Length Subsequence = " << max_lenght << endl;
}