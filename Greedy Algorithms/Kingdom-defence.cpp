#include <bits/stdc++.h>
using namespace std;
int main()
{
    int w, h, n;
    cin >> w >> h >> n;
    vector<int> x(n), y(n);
    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }
    sort(x.begin(), x.end());
    sort(y.begin(), y.end());

    int max_x = 0, max_y = 0;
    int diff_x, diff_y, prev_x = 0, prev_y = 0;
    for (int i = 0; i < n; i++)
    {
        diff_x = x[i]-prev_x-1;
        diff_y = y[i] - prev_y-1;
        max_x = max(max_x,diff_x);
        max_y = max(max_y,diff_y);
        prev_y = y[i]; prev_x = x[i];
    }
    max_x = max(max_x,(w-1-prev_x));
    max_y = max(max_y,(h-1-prev_y));

    int ans = max_x * max_y;
    cout<<ans<<endl;
}