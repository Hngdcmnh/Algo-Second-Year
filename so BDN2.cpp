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
		queue <long long> st;
		int n;
		cin >> n;
		st.push(1);
		while (!st.empty())
		{
			long long x = st.front();
			st.pop();
			if (x % n == 0)
			{
				cout << x<<endl;
				break;
			}
			st.push(x * 10);
			st.push(x * 10 + 1);
		}
	}
}