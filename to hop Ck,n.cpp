#include <iostream>
#include <stack>
#include <queue>
#include <algorithm>
#include <cmath>
using namespace std;
long long mod = 1e9 + 7;
long long a[1001][1001] = { { 0 } };

void tinh()
{
	for (int i = 0; i <= 1000; i++)
	{
		for (int j = 0; j <= 1000; j++)
		{
			if (i == j) a[i][j] = 1;
			if (i == 1) a[i][j] = j;
			if (i == 0) a[i][j] = 1;
		}
	}

	for (int i = 1; i <= 1000; i++)
	{
		for (int j = i; j <= 1000; j++)
		{
			a[i][j] = (a[i - 1][j - 1]%mod + a[i][j - 1]%mod)%mod;
		}
	}
}

int main()
{
	int t;
	cin >> t;
	tinh();
	while (t--)
	{
		
		long long n, k;
		cin >> n >> k;
		cout << a[k][n] << endl;
		
	}
}