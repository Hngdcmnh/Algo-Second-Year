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
		vector <string> vec;
		int n;
		cin >> n;
		long dem = 0;
		st.push("6");
		st.push("8");
		dem = 2;
		while (!st.empty())
		{
			string x = st.front();
			vec.push_back(x);
			st.pop();
			if (x.size() < n)
			{
				dem+=2;
				st.push(x + "6");
				st.push(x + "8");
			}
		}
		cout << dem << endl;
		for (int i = vec.size()-1;i>=0; i--)
		{
			cout << vec[i] << " ";
		}
		cout << endl;
	}
}