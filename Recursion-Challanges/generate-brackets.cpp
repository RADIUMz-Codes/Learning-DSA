#include <bits/stdc++.h>
using namespace std;

void brackets(int n, int bo, int bc, char* out, int i) {
	if (i == 2 * n)
	{
		out[i] = '\0';
		cout << out << endl;
		return;
	}
	if (bo < n)
	{
		out[i] = '(';
		brackets(n, bo + 1, bc, out, i + 1);
	}
	if (bc < bo)
	{
		out[i] = ')';
		brackets(n, bo, bc + 1, out, i + 1);
	}

}


int main()
{
	char out[100];
	int n;
	cin >> n;
	brackets(n, 0, 0, out, 0);
}