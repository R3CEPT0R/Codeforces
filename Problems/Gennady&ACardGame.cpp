#include <iostream>
#include <fstream>
#include <sstream>
 
using namespace std;
 
int main()
{
	string x, arg;
	cin >> x;       
	for (int i = 0; i < 5; i++)
	{
		cin >> arg;
		if (x[0] == arg[0] || x[1] == arg[1])
		{
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
	return 0;
}
