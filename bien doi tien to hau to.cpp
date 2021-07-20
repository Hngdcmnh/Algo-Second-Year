#include <iostream>
#include <stack>
#include <queue>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		stack <string> st2;
		for (int i = s.size() - 1; i >= 0; i--)
		{
			if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
			{
				string s1 = st2.top();
				st2.pop();
				string s2 = st2.top();
				st2.pop();
				string s3 = s1 + s2 + s[i];
				st2.push(s3);
			}
			else
			{
				string s4 = "";
				s4 += s[i];
				st2.push(s4);
			}
		}
		cout << st2.top() << endl;

	}
}