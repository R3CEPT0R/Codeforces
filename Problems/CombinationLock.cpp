#include <bits/stdc++.h>
using namespace std;
int main() {
	int n; int moves = 0;
	string x, y;
	cin >> n;
	cin >> x;
	cin >> y;
	for (int i = 0; i < n; i++)
	{
		int x1 = (int)x[i] - '0';
		int y1 = (int)y[i] - '0';
		int t = abs(x1 - y1);
		int t2 = 10 - t;
		if (t < t2)
		{
			moves += t;
		}
		else
		{
			moves += t2;
		}
	}
	cout << moves;
}
