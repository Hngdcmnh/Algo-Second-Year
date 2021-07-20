#include <iostream>
#include <stack>
#include <queue>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, k;
		cin >> n >> k;
		vector <int> a[1000];
		while (k--)
		{
			
			int x, y;
			cin >> x >> y;
			a[x].push_back(y);
			a[y].push_back(x);
		}
		for (int i = 1; i <= n; i++)
		{
			cout << i << ": ";
			for (int j = 0; j < a[i].size(); j++)
			{
				cout << a[i][j] << " ";
			}
			cout << endl;
		}
	}
}