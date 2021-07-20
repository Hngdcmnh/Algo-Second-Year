#include <iostream>
#include <stack>
#include <queue>
#include <algorithm>
#include <cmath>
using namespace std;
long long mod = 1e9 + 7;
long long a[100] = { 0 };
void tinh()
{
	a[1] = 1;
	a[2] = 1;
	for (int i = 3; i <= 92; i++)
	{
		a[i] = a[i - 1] + a[i - 2];
	}
}
// A B AB BAB ABBAB BABABBAB
int main()
{
	tinh();
	long long t;
	cin >> t;
	while (t--)
	{
		long long n, k;
		cin >> n >> k;
		while (/*n != 1 && n != 2*/ n>2)
		{
			if (k > a[n - 2])
			{
				k = k - a[n - 2];
				n = n - 1;
			}
			else if (k <= a[n - 2])
			{
				n = n - 2;
			}
			//cout << a[n-2]<<"---"<< k << "---" << n << endl;
		}
		if (n == 1) cout << "A";
		else cout << "B";
		cout << endl;
	}
}