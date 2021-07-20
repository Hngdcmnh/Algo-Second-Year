#include <iostream>
#include <stack>
#include <queue>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	long long t;
	cin >> t;
	while (t--)
	{
		long long n;
		cin >> n;
		long long a[1002];
		for (long long i = 1; i <= n; i++)
		{

			cin >> a[i];
		}
		long long b[1002] = { 0 };

		long long maxx = b[1];
		for (long long i = 1; i <= n; i++)
		{
			b[i] = a[i];
			for (long long j = 1; j < i; j++)
			{
				if (a[i] > a[j] && b[i] <b[j] + a[i])
				{
					b[i] = b[j] + a[i];
					
				}
			}
			if (maxx < b[i]) maxx = b[i];
		}

		/*for (long long i = 1; i <= n; i++)
		{
			cout << b[i] << " ";
		}
		cout << endl;*/

		cout << maxx << endl;
	}
}