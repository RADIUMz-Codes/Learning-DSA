#include <bits/stdc++.h>
using namespace std;

void transfer(stack <int>&s1,stack <int>&s2,int n)
{
	for(int i=0;i<n;i++)
	{
		s2.push(s1.top());
		s1.pop();
	}
}



void reverse(stack <int>&s1)
{
	stack <int>s2;
	int n=s1.size();
	for(int i=0;i<n;i++)
	{
		int x=s1.top();
		s1.pop();
		transfer(s1,s2,n-i-1);
		s2.push(x);
		transfer(s2,s1,n-i-1);

	}
}


void print(stack<int>s){
	while(!s.empty())
    {
    	cout<<s.top()<<endl;
    	s.pop();
    }
}



int main()
{
    stack <int>s1;
    
    for(int i=1;i<=5;++i)
    {
    	s1.push(i*10);
    }
    print(s1);
    cout<<endl;
    print(s1);

}