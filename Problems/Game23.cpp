#include <iostream>
#include <math.h>
 
using namespace std;
int main()
{
	int m, n;
	cin >> n >> m;
	if (m %n != 0)
	{
		cout << "-1" << endl;
		return 0;
	}
	int count = 0;
	long long div = m / n;
	while (div % 2 == 0)
	{
		count++;
		div /= 2;
	}
	while (div % 3 == 0)
	{
		count++;
		div /= 3;
	}
	div == 1 ? cout << count << endl : cout << "-1" << endl;
	return 0;
}
