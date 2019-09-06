#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main()
{
	vector<int> integers;
	int length, input;
	cin >> length;
	for (int i = 0; i < length; i++)
	{
		cin >> input;
		integers.push_back(input);
	}
 
	//actually solving 
	sort(integers.begin(), integers.end());     //sort vector
	integers.erase(unique(integers.begin(), integers.end()), integers.end());       //remove dups
 
	if (integers.size() > 3)
	{
		cout << "-1" << endl;
	}
	else if (integers.size() == 3)
	{
		if ((integers[2] - integers[1]) == (integers[1] - integers[0]))
		{
			cout << integers[1] - integers[0] << endl;
		}
		else
		{
			cout << "-1" << endl;
		}
	}
	else if (integers.size() == 2)
	{
		if ((integers[1] - integers[0]) % 2 == 0)
		{
			cout << (integers[1] - integers[0]) / 2 << endl;
		}
		else
		{
			cout << integers[1] - integers[0] << endl;
		}
	}
	else
	{
		cout << "0" << endl;
	}
 
	return 0;
}
