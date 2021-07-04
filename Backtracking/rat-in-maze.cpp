#include <bits/stdc++.h>
using namespace std;

bool isPossible(char ch[][10], int i, int j, int n) {
	if (i < n and j < n and ch[i][j] == '0') {
		return true;
	}
	return false;
}

bool print(char ch[][10], int path[10][10], int i, int j, int n) {
	if (i == n - 1 and j == n - 1) {
		path [i][j] = 1;
		for (int a = 0; a < n; a++) {
			for (int b = 0; b < n; b++) {
				cout << path[a][b] << " ";
			} cout << endl;
		} cout << endl;
		return 1;
	}

	if (isPossible(ch, i, j, n))
	{	path[i][j] = 1;

		
		if (print(ch, path, i, j + 1, n)) {
			return 1;
		}
		
		if (print(ch, path, i + 1, j, n)) {
			return 1;
		}
		path[i][j] = 0;
		return 0;
	}



}


int main()
{
	char maze[10][10] = {"00X0",
	                     "00X0",
	                     "000X",
	                     "0X00"
	                    };
	int path[10][10] = {0};
	bool as = print(maze, path, 0, 0, 4);
}