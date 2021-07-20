#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <string>
#include <sstream>

bool cmp(long long a, long long b)
{
	return a > b;
}

using namespace std;
int main()
{
	long long t;
	cin >> t;
	while (t--)
	{
		long long n;
		cin >> n;
		long long a[1000];
		long long b[1000];
		for (long long i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		for (long long i = 0; i < n; i++)
		{
			cin >> b[i];
		}
		sort(a, a + n);
		sort(b, b + n, cmp);

		long long res = 0;
		for (long long i = 0; i < n; i++)
		{
			res += a[i] * b[i];

		}
		cout << res << endl;
	}
}