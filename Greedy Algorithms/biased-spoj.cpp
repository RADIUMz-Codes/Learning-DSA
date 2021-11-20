#include <bits/stdc++.h>
using namespace std;

void solve()
{
    vector<pair<long long,string>>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        long long r;
        string s;
        cin>>s>>r;
        v.push_back(make_pair(r,s));
    }
    sort(v.begin(),v.end());
    long long b=0;
    for(int i=0;i<n;i++){
        b+=abs(v[i].first -(i+1));
    }
    cout<<b<<endl;
}

int main()
{
    long long t;
    cin>>t;
    while(t--) solve();
}