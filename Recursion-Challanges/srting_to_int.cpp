#include <bits/stdc++.h>
using namespace std;
int str_to_int(string s,int n)
{
    if(n==0)
    {
        return 0;
    }
    int dig=s[n-1]-'0';
    
    return str_to_int(s,n-1)*10 +dig; 
}

int main()
{
    string s;
    cin>>s;
    int n=s.length();
    cout<<str_to_int(s,n);
    return 0;

}