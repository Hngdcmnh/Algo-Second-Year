#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <sstream>
#include <algorithm>
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
		for (long long i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		sort(a, a + n);
		long long res1 = 0;
		long long res2 = 0;
		for (long long i = 0; i < n; i++)
		{
			if (i % 2 == 0)
			{
				res1 = res1 * 10 + a[i];
			}
			else res2 = res2 * 10 + a[i];
		}
		cout << res1 + res2 << endl;
	}
}