#include <bits/stdc++.h>
#define  vi vector<int>
using namespace std;
void vecSum(vi &a, vi &b)
{
    int i=a.size();
    int j=b.size();
    for(int k=0; k<i; k++)
    {
        
    }

}

int main()
{
    int m;
    cin>>m;
    vi a(m);
    for(auto  &x:a)cin>>x;

    int n;
    cin>>n;
    vi b(n);
    for(auto  &x:b)cin>>x;

    if(m>n)
    vecSum(a, b);
    else
    vecSum(b, a);
    
    return 0;
}