#include <bits/stdc++.h>
using namespace std;

int f(int n)
{
	if (n <= 0) return 0;
	if (n <= 2) return n + 1;

	return f(n - 1) + f(n - 2);
}

int main()
{
	int  t;
	cin >> t;
	while (t--) {
		cout << t + 1 << " " << f(1 + t) << endl;
	}

}