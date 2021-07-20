#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <string>
#include <sstream>
using namespace std;
long long a[100001];
long long c[100001] = { 0 };
long long n;

int duyet(int to, int nho)
{
	if (nho <= 0) return 0;
	if (to < n / 2) return 0;
	if (a[nho] * 2 <= a[to])
	{
		//cout << a[nho] << "---" << a[to] << endl;
		return 1 + duyet(to - 1, nho - 1);
	}
	else return duyet(to, nho - 1);
}

int main()
{
	long long t;
	cin >> t;
	while (t--)
	{
		
		cin >> n;
		
		for (long long i = 1; i <= n; i++)
		{
			cin >> a[i];
		}
		sort(a+1, a + n+1);
		cout << n - duyet(n, n / 2) << endl;

	}
}