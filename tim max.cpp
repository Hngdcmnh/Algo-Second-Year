#include <iostream>
#include <stack>
#include <queue>
#include <algorithm>
#include <cmath>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

long long a[1000000];
long long mod = 1e9+7;
int main()
{
	long long t;
	cin >> t;
	while (t--)
	{
		long n;
		cin >> n;
		
		for (long i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		long long res = 0;
		sort(a, a + n);
		for (long long i = 0; i < n; i++)
		{
			res = (res + (a[i] * i) % mod)%mod;
		}
		cout << res << endl;
	}
}