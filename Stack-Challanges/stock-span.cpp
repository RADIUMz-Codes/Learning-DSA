#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &x:v) cin>>x;
    stack<int> s;
    for(int i=0;i<n;i++){
        while(!s.empty() and v[s.top()]<=v[i])
        {
            s.pop();
        }
        if(s.empty()){
            cout<<i+1<<" ";
        }
        else{
            cout<<i-s.top()<<" ";
        }
        s.push(i);
    }cout<<"END";

}