#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <string>
#include <sstream>
using namespace std;
int a[1001][1001] = { {0} };
int n, k;
bool duyet(int k, int h)
{

	int b[1001] = { 0 };
	queue <int> q;
	q.push(k);
	b[k] = 1;
	while (!q.empty())
	{
		int x = q.front();
		q.pop();
		
		if (x == h) return true;
		for (int i = 1; i <= n; i++)
		{
			if (a[x][i] == 1 && b[i] == 0)
			{
				q.push(i);
				b[i] = 1;

			}
		}
	}
	return false;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		for (int i = 0; i <= 1000; i++)
		{
			for (int j = 0; j <= 1000; j++)
			{
				a[i][j] = 0;
			}
		}

		cin >> n >> k;
		while (k--)
		{
			int x, y;
			cin >> x >> y;
			a[x][y] = 1;
			a[y][x] = 1;
		}


		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				if (a[i][j] == 1)
				{
					a[i][j] = 0;
					a[j][i] = 0;
					if (duyet(j, i))
					{
						cout << "YES" << endl;
						goto aa;
					}
					a[i][j] = 1;
					a[j][i] = 1;
				}
			}
		}
		cout << "NO" << endl;
	aa:;
	}
}