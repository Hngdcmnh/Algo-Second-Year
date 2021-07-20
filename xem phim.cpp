#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <sstream>
#include <algorithm>
#include <queue>
using  namespace std;
long long res[102][25001]={{0}};

int main()
{
		int k, n;
		cin >> k >> n;
		int a[102];
		for (int i = 1; i <= n; i++) cin >> a[i];
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= k; j++)
			{
				res[i][j] = res[i - 1][j];
				if (a[i] <= j)
				{
					res[i][j] = max(res[i][j], res[i - 1][j - a[i]] +a[i]);
				}

			}
		}
		cout << res[n][k] << endl;
	
}