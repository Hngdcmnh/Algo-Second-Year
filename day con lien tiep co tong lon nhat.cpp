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

	long long t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int a[100];
		int b[100][100] = { {0} };
		for (int i = 1; i <= n; i++)
		{
			cin >> a[i];
		}
		int maxx = 0;
		for (int i = 1; i <= n; i++)
		{
			for (int j = i; j <= n; j++)
			{
				if (i == j) b[i][j] = a[i];
				else b[i][j] = b[i][j - 1] + a[j];
				if (maxx < b[i][j]) maxx = b[i][j];
			}

		}
		/*for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				cout << b[i][j]<<" ";
			}
			cout << endl;
		}*/
		cout << maxx << endl;
		
	}
}