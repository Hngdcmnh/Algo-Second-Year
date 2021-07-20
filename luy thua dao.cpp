#include <iostream>
#include <stack>
#include <queue>
#include <algorithm>
#include <cmath>
using namespace std;
long long mod = 1e9 + 7;
long long tinhmu(long long n, long long a)
{
	if (a == 0) return 1;
	if (a == 1) return n%mod;
	if (a % 2 == 0)
	{
		long long x = tinhmu(n, a / 2);
		return (x*x) % mod;
	}
	else if (a % 2 == 1)
	{
		return (n *  tinhmu(n, a - 1 )) % mod;
	}
}

int main()
{
	long long t;
	cin >> t;
	while (t--)
	{
		long long n;
		cin >> n;
		long long m = n;
		long long a = 0;
		while (m > 0)
		{
			a = a * 10 + (m % 10);
			m = m / 10;
		}

		cout << tinhmu(n, a) << endl;
	}
}