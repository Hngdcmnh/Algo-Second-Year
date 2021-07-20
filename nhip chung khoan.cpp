#include <iostream>
#include <stack>
#include <queue>
#include <algorithm>
#include <cmath>
#include <map>
#include <vector>
using namespace std;

struct day
{
	int val;
	int pos;
};

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int a[100001] = { 0 };
		for (int i = 1; i <= n; i++)
		{
			cin >> a[i];
		}

		stack <day> st;
		day day1;
		day1.val = a[1];
		day1.pos = 1;
		st.push(day1);
		cout << 1 << " ";
		for (int i = 2; i <= n; i++)
		{
			while (!st.empty() && st.top().val <= a[i])
			{
				st.pop();
			}
			if (st.empty())
			{
				cout << i<<" ";
			}
			else
			{
				cout << i - st.top().pos <<" ";
			}
			day1.pos = i;
			day1.val = a[i];
			st.push(day1);
		}
		cout << endl;


	}
}