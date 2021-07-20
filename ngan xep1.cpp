#include <iostream>
#include <stack>
#include <queue>
#include <algorithm>
#include <cmath>
using namespace std;
long long mod = 1e9 + 7;

int main()
{
	vector <int> vec;
	string s;
	stack <int> st;
	while (cin >> s)
	{
		int n;
		if (s != "pop" && s != "show")
		{
			cin >> n;
			if (s == "push") vec.push_back(n);
		}
		
		else if (s == "pop")
		{
			if (vec.size()!=0)
			{
				vec.pop_back();
			}
		}
		else if (s == "show")
		{
			if (vec.size() != 0)
			{
				for (int i = 0; i < vec.size(); i++) cout << vec[i] << " ";
			}

			if (vec.size() == 0)
			{
				cout << "empty" << endl;
				continue;
			}
		}
		
		

		cout << endl;
	}
}