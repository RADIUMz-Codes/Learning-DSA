#include <bits/stdc++.h>
using namespace std;

void insertBottom(stack<int> &s, int t)
{
	// base case
	if (s.empty())
	{
		s.push(t);
		return;
	}

	int d = s.top();
	s.pop();
	insertBottom(s, t);
	s.push(d);
}

void reverse(stack<int> &s)
{
	if (s.empty())
	{
		return;
	}
	int t = s.top();
	s.pop();
	reverse(s);
	insertBottom(s, t);

}

void print(stack<int> s)
{
	while (!s.empty())
	{
		cout << s.top() << endl;
		s.pop();
	}
}

int main()
{

	stack<int> s1;

	for (int i = 1; i <= 5; ++i)
	{
		s1.push(i * 10);
	}
	print(s1);
	reverse(s1);
	cout << endl;
	print(s1);
}