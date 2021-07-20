#include <iostream>
#include <stack>
#include <queue>
#include <algorithm>
#include <cmath>
using namespace std;
long check = 0;
int duyet(int i,int j,int n,int m)
{
	if (i >= n || j >= m) return 0;
	if (i == n - 1 && j == m - 1) return 1;
	else
	{
		return duyet(i + 1, j, n, m) + duyet(i, j + 1, n, m);
	}
}
int main()
{
	long t;
	cin >> t;
	while (t--)
	{
		int n,m;
		cin >> n>>m;
		int a[100][100];
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cin >> a[i][j];
			}
		}

		cout << duyet(0, 0, n, m) << endl;
	}

}