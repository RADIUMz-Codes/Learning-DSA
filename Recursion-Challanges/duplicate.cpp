#include <bits/stdc++.h>
using namespace std;

void dup(string s,int n)
{
    if(n==-1)
    {
        return;
    }
    dup(s,n-1);
    if(s[n]==s[n+1])
    {
        cout<<s[n]<<"*";
    }
    else
        cout<<s[n];
}

int main()
{
    string s;
    cin>>s;
    int n= s.length();
    dup(s,n-1);
    return 0;
}