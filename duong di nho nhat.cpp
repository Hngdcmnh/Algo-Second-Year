#include <iostream>
#include <stack>
#include <queue>
#include <algorithm>
#include <cmath>
using namespace std;
long long a[1000][1000] = { {0} };
long long b[1000][1000] = { {0} };
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, m;
		cin >> n >> m;
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= m; j++)
			{
				cin >> a[i][j];
			}
		}

		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= m; j++)
			{
				if (i == 1)
				{
					b[i][j] = b[i][j - 1] + a[i][j];
				}

				if (j == 1)
				{
					b[i][j] = b[i-1][j] + a[i][j];
				}

				if (i != 1 && j != 1)
				{
					b[i][j] = min(min(b[i - 1][j], b[i][j - 1]), b[i-1][j-1]) + a[i][j];
				}
				
			}
		}

		/*for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= m; j++)
			{
				cout << b[i][j] << " ";
			}
			cout << endl;
		}*/

		cout << b[n][m] << endl;
	}
}