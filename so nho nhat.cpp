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
	long long t;
	cin >> t;
	while (t--)
	{
		int n, k;
		cin >> n >> k;
		if (9 * k < n) cout << "-1" << endl;
		else
		{
			stack <int> st;
			/*int m = k;*/
			for (int i = 1; i <= k; i++)
			{
				int h = 9;
				while (n - h < 1 )
				{
					h--;
				}
				//cout << h << endl;
				n = n - h;
				if (i == k) h++;
				st.push(h);
			}
			while (!st.empty())
			{
				
				cout << st.top();
				st.pop();
			}
			
		}
		cout << endl;
	}
}