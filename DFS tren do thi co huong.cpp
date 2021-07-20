#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <string>
#include <sstream>
using namespace std;
int a[1002][1002] = { {0} };
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, m, u;
		cin >> n >> m >> u;
		for (int i = 0; i <= 1000; i++)
		{
			for (int j = 0; j <= 1000; j++)
			{
				a[i][j] = 0;
			}
		}
		while (m--)
		{
			int x, y;
			cin >> x >> y;
			a[x][y] = 1;
		}

		/*for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				cout << a[i][j] << " ";
			}
			cout << endl;
		}*/
		int c[10002] = { 0 };
		stack <int> s;
		s.push(u);
		c[u] = 1;
		cout << u << " ";
		while (!s.empty())
		{
			int x = s.top();
			s.pop();
			c[x] = 1;
			for (int i = 1; i <= n; i++)
			{
				if (a[x][i] == 1 && c[i] == 0)
				{
					cout << i << " ";
					s.push(x);
					s.push(i);
					break;
				}

			}
		}
		cout << endl;
	}
}