#include <bits/stdc++.h>
using namespace std;

void move(char ch[], int i, int j)
{
	if (i >= j)
	{
		return;
	}
	if (ch[i] == 'x')
	{
		for (int t = i; t < j ; t++)
		{
			ch[t] = ch[t + 1];
		}
		ch[j] = 'x';
		move(ch, i + 1, j - 1);
	}
	else
	{
		move(ch, i + 1, j);
	}

}


int main()
{
	// string s;
	// cin >> s;
	// cout << s;
	char ch[1005];
	cin >> ch;
	// cout << ch;
	move(ch, 0, strlen(ch) - 1);
	cout << ch;


}