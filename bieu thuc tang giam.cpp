#include <iostream>
#include <stack>
#include <queue>
#include <algorithm>
#include <cmath>
#include <sstream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		vector <int> vec;
		int x = 1;
		vec.push_back(x);
		int kcach = 0;
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == 'I')
			{
				kcach = 0;
				x++;
				vec.push_back(x);
			}
			if (s[i] == 'D')
			{
				x++;
				vec.insert(vec.begin() + i - kcach, x);
				kcach++;
			}
		}

		for (int i = 0; i < vec.size(); i++)
		{
			cout << vec[i];
		}
		cout << endl;
	}
}