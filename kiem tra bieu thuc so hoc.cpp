#include <iostream>
#include <stack>
#include <queue>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
long long mod = 1e9 + 7;

int main()
{
	int t;
	cin >> t;
	cin.ignore();
	while (t--)
	{
		stack <char> st;
		string s;
		getline(cin, s);
		int dem = 0;
		for (int i = 0; i <s.size(); i++)
		{
			if ( s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '('  )
			{
				st.push(s[i]);
			}
			else if (s[i] == ')')
			{
				int dem = 0;
				char top = st.top();
				st.pop();
				while (top != '(')
				{
					if (top == '+' || top == '-' || top == '*' || top == '/')
					{
						dem++;
					}

					top = st.top();
					st.pop();
				}
				if (dem == 0)
				{
					cout << "Yes" << endl;
					goto aa;
				}
			}
		}
		cout << "No" << endl;
	aa:;
	}
}