#include <bits/stdc++.h>
using namespace std;

int fn(int n) {
	if (n <= 1)
	{
		return 1;
	}
	// if(n<0)
	// {
	// 	return 0;
	// }

	int alone = fn(n - 1);
	int dbl = (n - 1) * fn(n - 2);
	return alone + dbl;
}

int main()
{
	int n;
	cin >> n;
	while (n != -1)
	{
		cout << fn(n) << endl;
		cin >> n;
	}
}
