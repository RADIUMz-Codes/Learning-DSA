

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for(auto &x:arr) cin>>x;
    int l = 0;
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        arr[i] += (i == 0) ? 0 : arr[i - 1];
        if (m.find(arr[i]) != m.end())
        {
            l = max (l,i-m[arr[i]]);
        }
        else
        {
            m[arr[i]] = i;
        }
    }
    cout<<"Length of Longest Subarray = "<<l<<endl;
    return 0;
}