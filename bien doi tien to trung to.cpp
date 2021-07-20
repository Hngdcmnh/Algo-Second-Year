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
		stack <string> st;
		for (int i = s.size() - 1; i >= 0; i--)
		{
			if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
			{
				string s1 = st.top();
				st.pop();
				string s2 = st.top();
				st.pop();
				string s3 = "(" + s1 + s[i] + s2 + ")";
				st.push(s3);
			}
			else
			{
				string s4 = "";
				s4 += s[i];
				st.push(s4);
			}
		}
		cout << st.top()<<endl;
		st.pop();
	}
}