#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <string>
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
		stack <char> st;
		for (int i = 0; i < s.size(); i++)
		{
			if (st.empty()) st.push(s[i]);
			else
			{
				if (s[i] == ')')
				{
					if (st.top() == '(') st.pop();
					else st.push(s[i]);
				}
				else st.push(s[i]);
				
			}
			
			
		}
		
		int sum = 0;
		while (!st.empty())
		{
			if (st.top() == ')')
			{
				sum += 1;
				st.pop();
				st.pop();
				
			}
			else
			{
				char x = st.top();
				st.pop();
				if (st.top() == '(')
				{
					sum += 1;
					st.pop();
				}
				else
				{
					sum += 2;
					st.pop();
				}
			}
			
		}
		cout << sum << endl;
	}
}