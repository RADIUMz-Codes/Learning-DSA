#include <bits/stdc++.h>
using namespace std;
string ch="\0";
void dup(string s, int n)
{
    if(n==0)
    {
        cout<<ch;
        return;
    }
    
    if(ch[0]!=s[n-1])
    {
        ch=s[n-1]+ch;
    }
    dup(s,n-1);
 
}


int main()
{
    string s;
    cin>>s;
    int n=s.length();
    dup(s,n);
    return 0;
}