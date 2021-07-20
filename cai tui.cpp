#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <sstream>
#include <algorithm>
#include <queue>
using  namespace std;
struct vat
{
	int weight;
	int value;
};

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, k;
		cin >> n >> k;
		vat list[n+1];
		for (int i = 1; i <= n; i++) cin >> list[i].weight;
		for (int i = 1; i <= n; i++) cin >> list[i].value;
		int res[n+1][k+1] = { {0} };
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= k; j++)
			{
				res[i][j] = res[i - 1][j];
				if (list[i].weight <= j)
				{
					res[i][j] = max(res[i][j], res[i - 1][j - list[i].weight] + list[i].value);
				}

			}
		}
		cout << res[n][k] << endl;
	}
}