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
	int t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		int n;
		if (s != "POP" && s != "PRINT")
		{
			cin >> n;
			if (s == "PUSH") vec.push_back(n);
		}

		else if (s == "POP")
		{
			if (vec.size() != 0)
			{
				vec.pop_back();
			}
		}
		else if (s == "PRINT")
		{
			if (vec.size() != 0)
			{
				/*for (int i = 0; i < vec.size(); i++) cout << vec[i] << " ";*/
				cout << vec[vec.size() - 1];
			}

			if (vec.size() == 0)
			{
				cout << "NONE" << endl;
				continue;
			}
		}



		cout << endl;
	}
		
	
}