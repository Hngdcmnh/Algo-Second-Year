#include <iostream>
#include <stack>
#include <queue>
#include <algorithm>
#include <cmath>
using namespace std;

int a[600][600] = { {0} };

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
		
		int maxx = 0;

		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= m; j++)
			{
				/*cout << a[i][j];*/
				if(a[i][j]==1)a[i][j] = min(min(a[i - 1][j], a[i][j - 1]), a[i - 1][j - 1]) +1;
				//cout << a[i][j] << " ";
				if (maxx < a[i][j]) maxx = a[i][j];
			}
			/*cout << endl;*/
		}
		cout << maxx << endl;
		
		
	}
	
}