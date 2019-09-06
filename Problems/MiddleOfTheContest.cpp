#include <iostream>
#include <sstream>
 
using namespace std;
int main()
{
	string time1, time2;
	int h1, h2, m1, m2;
 
	//simple input
	cin >> time1;
	cin >> time2;
	//conversions and extractions
	h1 = stoi(time1.substr(0, 2));
	m1 = stoi(time1.substr(3, 2));
	h2 = stoi(time2.substr(0, 2));
	m2 = stoi(time2.substr(3, 2));
 
	float t1 = (h1 * 60) + m1;
	float t2 = (h2 * 60) + m2;
	float midpoint = (t2 + t1) / 2;
 
	int h3 = (midpoint / 60);
	int m3 = (int)midpoint % 60;
 
	if (h3 < 10)
	{
		if (m3 < 10)
		{
			cout << "0" << h3 << ":0" << m3 << endl;
		}
		else    
		{
			cout << "0" << h3 << ":" << m3 << endl;
		}
	}
	else
	{
		if (m3 < 10)
		{
			cout << h3 << ":0" << m3 << endl;
		}
		else
		{
			cout << h3 << ":" << m3 << endl;
		}
	}
	return 0;
}
