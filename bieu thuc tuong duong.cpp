#include <iostream>
#include <stack>
#include <queue>
#include <algorithm>
#include <cmath>
#include <sstream>
using namespace std;
int main()
{
	long long t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		deque <char> st;
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] != ')')
			{
				st.push_back(s[i]);
			}
			else 
			{
				vector <char> vec1;
				while (st.back() != '(' && !st.empty())
				{
					vec1.push_back(st.back());
					st.pop_back();
				}
				if(!st.empty())st.pop_back();
				if (!st.empty() && st.back() == '-')
				{
					for (int i = 0; i < vec1.size(); i++)
					{
						if (vec1[i] == '+') vec1[i] = '-';
						else if (vec1[i] == '-') vec1[i] = '+';
					}
				}

				for (int i = vec1.size() - 1; i >= 0; i--)
				{
					st.push_back(vec1[i]);
				}
			}
		}

		while (!st.empty())
		{
			cout << st.front();
			st.pop_front();
		}
		cout << endl;
	}
}