#include <iostream>
#include <stack>
#include <queue>
#include <algorithm>
#include <cmath>
using namespace std;
long long mod = 1e9 + 7;


int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, k;
		cin >> n >> k;
		int a[10000] = { 0 };
		a[0] = 1;
		a[1] = 1;
		for (int i = 2; i <= n; i++)
		{
			for (int j = i; j >= i-k && j>=0; j--)
			{
				a[i] = (a[i] % mod + a[j] % mod) % mod;
			}
		}
		cout << a[n]<<endl;
	}
}