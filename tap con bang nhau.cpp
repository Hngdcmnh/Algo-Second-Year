#include <iostream>
#include <stack>
#include <queue>
#include <algorithm>
#include <cmath>
using namespace std;
long check = 0;
void duyet(long a[], long i, long n, long sum, long res)
{
	if (res * 2 == sum)
	{
		check = 1;
		return;
	}
	if (i >= n || check == 1) return;
	if (res + a[i] <= sum / 2)
	{
		duyet(a, i + 1, n, sum, res + a[i]);
	}
	duyet(a, i + 1, n, sum, res);
}
int main()
{
	long t;
	cin >> t;
	while (t--)
	{
		check = 0;
		long n, sum;
		cin >> n;
		sum = 0;
		long a[1000];
		for (long i = 0; i < n; i++)
		{
			cin >> a[i];
			sum += a[i];
		}
		if (sum % 2 != 0)
		{
			cout << "NO"<<endl;
			continue;
		}
		sort(a, a + n);
		//vector <long> vt;
		duyet(a, 0, n, sum, 0);
		if (check == 1) cout << "YES";
		if (check == 0) cout << "NO";
		cout << endl;
	}

}