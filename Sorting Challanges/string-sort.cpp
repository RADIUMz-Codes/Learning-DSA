#include <bits/stdc++.h>
using namespace std;

bool compare(string a,string b){
    if(a.find(b)==0 || b.find(a)==0)
    {
        return a.length()>b.length();
    }
    return a<b;
}

int main()
{
    int n;
    cin>>n;
    string s[1005];
    for (int  i = 0; i < n; i++)
    {
        cin>>s[i];
    }
    sort(s,s+n,compare);
    for (int  i = 0; i < n; i++)
    {
        cout<<s[i]<<endl;
    }


    
    
    return 0;
}