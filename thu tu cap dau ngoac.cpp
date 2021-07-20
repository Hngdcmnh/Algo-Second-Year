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
	cin.ignore();
	while (t--)
	{
		string s;
		getline(cin, s);
		stack<int> st;
		int dem = 0;
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == '(')
			{
				st.push(++dem);
				cout << dem << " ";
			}
			else if (s[i] == ')')
			{
				cout << st.top()<<" ";
				st.pop();
			}
		}
		cout << endl;
	}
}