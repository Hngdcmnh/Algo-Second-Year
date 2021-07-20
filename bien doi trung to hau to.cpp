#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <string>
#include <sstream>

int bac(char a)
{
	if (a == '+' || a == '-') return 1;
	else if (a == '*' || a == '/') return 2;
	else if (a == '^') return 3;
	else return 0;
}
using namespace std;
int main()
{
	int t;
	cin >> t;
	cin.ignore();
	while (t--)
	{
		string s;
		getline(cin, s);
		stack <char> dau;
		string res = "";
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^')
			{
				while (!dau.empty() && bac(dau.top()) >= bac(s[i]))
				{
					res = res + dau.top();
					dau.pop();
				}
				dau.push(s[i]);
			}
			else if (s[i] == '(') dau.push(s[i]);
			else if (s[i] >= 'A' && s[i] <= 'Z' || (s[i] >= 'a' && s[i] <= 'z')) res = res + s[i];
			else if (s[i] == ')')
			{
				while (!dau.empty() && dau.top() != '(')
				{
					res = res + dau.top();
					dau.pop();
				}
				if(!dau.empty() && dau.top() == '(') dau.pop();
			}
		}

		while (!dau.empty())
		{
			if(dau.top()!='(')res += dau.top();
			dau.pop();
		}
		cout << res << endl;
	}
}