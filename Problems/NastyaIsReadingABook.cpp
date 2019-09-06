#include <iostream>
#include <vector>
#include <fstream>
 
using namespace std;
 
int main()
{
	int chapters; int page1; int page2; int index;
	vector<int> vec;
	cin >> chapters;
	for (int i=0;i<chapters;i++) {
		cin >> page1 >> page2;
		vec.push_back(page1);
		vec.push_back(page2);
	}
	cin >> index;
	int match=0;
	for (int i = 0; i < vec.size(); i++) {
		if (index > vec[i] && index > vec[i+1])
		{
			i++;
			match++;
		}
		else
		{
			break;
		}
	}
	cout << chapters-match << endl;
	return 0;
 
}
