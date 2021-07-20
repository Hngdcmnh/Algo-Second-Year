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
		stack <int> st;
		st.push(-1);
		int kq = 0;
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == '(') st.push(i);
			else
			{
				st.pop();
				if (st.size() > 0)
				{
					if (i - st.top() > kq) kq = i - st.top();
				}
				else if(st.size()==0) st.push(i);
			}
		}
		cout << kq << endl;
	}
}