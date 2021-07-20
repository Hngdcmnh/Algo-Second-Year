#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <sstream>
#include <algorithm>
#include <queue>
using namespace std;
long long x[100001];
long long y[100001];
int main()
{
	long long t;
	cin >> t;
	while (t--)
	{
		long long demy[100001] = { 0 };
		long long n, m;
		cin >> n >> m;
		
		for (long long i = 0; i < n; i++)
		{
			cin >> x[i];
		}
		for (long long i = 0; i < m; i++)
		{
			cin >> y[i];
			demy[y[i]]++;
		}
		
		for (long long i = 1000; i >= 3; i--)
		{
			demy[i] += demy[i + 1];
		}

		long long res = 0;
		for (long long i = 0; i < n; i++)
		{
			if (x[i] == 0) continue;
			if (x[i] == 1)
			{
				res += demy[0];
			}
			else if (x[i] == 2)
			{
				res = res + demy[0] + demy[1] + demy[5];
			}
			else if (x[i] == 3)
			{
				res = res + demy[0]+ demy[1] + demy[2] + demy[4];
			}
			else
			{
				res = res + demy[0] + demy[1] + demy[x[i] + 1];
			}
			
		}
		cout << res << endl;
	}

}