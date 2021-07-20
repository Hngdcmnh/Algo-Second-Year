#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <sstream>
#include <algorithm>
#include <queue>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		long long a[1000] = { 0 };
		a[1] = 1;
		a[2] = 1;
		a[3] = 1;
		for (long long i = 2; i <= n; i++)
		{
			for (int k = 1; k <= 3; k++)
			{
				if (i - k >= 0)
				{
					a[i] = a[i] + a[i - k];
				}
				
			}
		}
		cout << a[n] << endl;
	}
}