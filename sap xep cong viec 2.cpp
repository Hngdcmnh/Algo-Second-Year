#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <string>
#include <sstream>
using namespace std;
struct cv
{
	long long id;
	long long time;
	long long value;
};

cv a[1001];

bool cmp(cv a, cv b)
{
	return a.value > b.value;
}

int main()
{
	long long t;
	cin >> t;
	while (t--)
	{
		long long n;
		cin >> n;
		
		long long maxx = 0;
		for (long long i = 0; i < n; i++)
		{
			cin >> a[i].id >> a[i].time >> a[i].value;
		}
		sort(a, a + n, cmp);

		int dd[10000] = { 0 };
		long long dem = 0;
		long long res = 0;

		for (long long i = 0; i < n; i++)
		{
			while (dd[a[i].time] == 1 && a[i].time > 0) a[i].time--;
			if (dd[a[i].time] == 0 && a[i].time > 0)
			{
				dd[a[i].time] = 1;
				res += a[i].value;
				dem++;
			}
		}

		cout << dem << " " << res << endl;
	}
}