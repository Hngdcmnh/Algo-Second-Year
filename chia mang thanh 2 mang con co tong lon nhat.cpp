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
		long long n, k;
		cin >> n >> k;
		long long a[1000];
		
		for (long long i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		sort(a, a + n);
		long long sumN1 = 0;
		long long sumK1 = 0;
		long long sumN2 = 0;
		long long sumK2 = 0;
		if (k <= n / 2)
		{
			for (long long i = 0; i < n; i++)
			{
				if (i < k) sumK1 += a[i];
				else sumN1 += a[i];
			}
			cout << sumN1 - sumK1 << endl;
		}
		else
		{
			for (long long i = 0; i < n; i++)
			{
				if (i < n-k) sumK2 += a[i];
				else sumN2 += a[i];
			}
			cout << sumN2 - sumK2 << endl;
		}
		
		/*cout << max(max(sumN2 - sumK2, sumK2 - sumN2), max(sumN1 - sumK1, sumK1 - sumN1))<<endl;*/
	}
}