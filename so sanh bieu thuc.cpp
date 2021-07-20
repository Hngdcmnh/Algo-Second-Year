#include <iostream>
#include <stack>
#include <queue>
#include <algorithm>
#include <cmath>
#include <map>
#include <vector>
using namespace std;

string convert(string s)
{
	stack <string> st;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == ')')
		{
			string s1 = "";
			while (!st.empty() && st.top() != "(")
			{
				s1 = st.top() + s1;
				st.pop();
			}
			if (!st.empty() && st.top() == "(")
			{
				st.pop();
			}
			if (!st.empty() && st.top() == "-")
			{
				for (int j = 0; j < s1.size(); j++)
				{
					if (s1[j] == '-') s1[j] = '+';
					else if (s1[j] == '+') s1[j] = '-';
				}
			}
		
			st.push(s1);
		}
		else
		{
			string s4 = "";
			s4 += s[i];
			st.push(s4);
		}
	}

	string s3 = "";
	while (!st.empty())
	{
		s3 = st.top() + s3;
		st.pop();
	}
	return s3;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string s1,s2;
		cin >> s1>>s2;
		/*cout << convert(s1) << endl;*/
		if (convert(s1) == convert(s2))
		{
			cout << "YES" << endl;
		}
		else cout << "NO" << endl;
		
	}
}