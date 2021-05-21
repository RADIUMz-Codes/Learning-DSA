#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n; 
    vector<long long> v(n);
    for(long long i=0;i<n;i++)
    {
        cin>>v[i];
    }
    long long m;
    cin>>m;

    sort(v.begin(),v.end());

    if(binary_search(v.begin(),v.end(),m))
    {
        auto it =lower_bound(v.begin(),v.end(),m);
        cout<<(it-v.begin())<<endl;
    }
    else
    {
        cout<<-1;
    }
    return 0;
}