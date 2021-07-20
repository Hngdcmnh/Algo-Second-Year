#include <iostream>
#include <stack>
#include <queue>
#include <algorithm>
#include <cmath>
#include <map>
#include <vector>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		stack <int> st;
		int res = 0;
		for (int i = 0; i < s.size(); i++)
		{
			/*if (s[i] != '+' || s[i] != '-' || s[i] == '*' || s[i] == '/')
			{
				st1.push(s[i]);
			}*/
			if (s[i] >= '0' && s[i] <= '9') st.push((int)(s[i]-'0'));
			else
			{
				int a = st.top();
				st.pop();
				int b = st.top();
				st.pop();
				int res1 = 0;
				if (s[i] == '+') res1 = b + a;
				if (s[i] == '-') res1 = b - a;
				if (s[i] == '*') res1 = b * a;
				if (s[i] == '/') res1 = b / a;
				st.push(res1);
			}
		}
		cout << st.top() << endl;

	}
	
}