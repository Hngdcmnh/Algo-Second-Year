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
	cin.ignore();
	while (t--)
	{
		string s;
		cin >> s;
		stack <char> st;
		int dem = 0;
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == '(') st.push(s[i]);
			else if (s[i] == ')' && !st.empty())
			{
				st.pop();
				dem+=2;
			}
		}
		
		cout << dem << endl;

	}
}