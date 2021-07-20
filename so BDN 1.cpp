#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <sstream>
#include <algorithm>
#include <queue>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		queue <string> st;
		string n;
		cin >> n;
		long dem = 0;
		st.push("1");
		while (!st.empty())
		{
			string x = st.front();
			st.pop();
			if (x.size()!=n.size())
			{
				if (x.size() < n.size())
				{
					dem++;
					st.push(x + "0");
					st.push(x + "1");
				}
			}
			else
			{
				if (x <= n)
				{
					dem++;
					st.push(x + "0");
					st.push(x + "1");
				}
			}
		}
		cout << dem << endl;
	}
}