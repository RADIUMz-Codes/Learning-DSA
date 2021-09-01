#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &x:a) cin>>x;
    stack <int> s;
    s.push(0);
    for(int i =0;i<n;i++)
    {
        while(!s.empty() and a[s.top()]<=a[i]  ){
            s.pop();
        }
        if(s.empty())
            cout<<i+1;
        else{
            cout<<i-s.top();
        }
        s.push(i);
        cout<<" ";
    }

    return 0;
}