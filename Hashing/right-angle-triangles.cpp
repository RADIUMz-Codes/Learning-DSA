#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int, int>> p;
    int n;
    cin >> n;
    map<int, int> x, y;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        p.push_back(make_pair(a, b));
        x[a]++;
        y[b]++;
    }

    int sum = 0;
    for (auto i : p)
    {
        sum += (x[i.first] - 1) * (y[i.second] - 1);
    }
    cout<<"Total Right Angled Triangles = "<<sum;
}