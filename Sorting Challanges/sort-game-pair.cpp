#include <bits/stdc++.h>
using namespace std;
bool compare(pair<string,int> a, pair<string,int> b)
{
    if(a.second==b.second)
    {
        return a.first<b.first;
    }
    return a.second>b.second;

}

int main()
{
    int x, n;
    cin>>x>>n;
    vector<pair<string,int>> p(n);
    for (int i = 0; i < n; i++)
    {
        string s ;
        int a;
        cin>>s>>a;
        p[i].first =s;
        p[i].second =a;

    }
    sort(p.begin(), p.end(),compare);

    for(auto y:p)
    {
        if(y.second<x)
        {
            return 0;
        }
        cout<<y.first<<" "<<y.second<<endl;
    }
    
    return 0;
}