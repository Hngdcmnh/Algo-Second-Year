#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <string>
#include <sstream>
using namespace std;
long long a[1000001];
int main()
{
	long long t;
	cin >> t;
	while (t--)
	{
		long long n;
		cin >> n;
		

		for (long long i = 0; i < n; i++)
		{
			cin >> a[i];
		}

		for (long long i = 0; i < n; i++)
		{
			long long check1=0, check2=0;
			for (long long j = i + 1; j < n; j++)
			{
				if (a[j] > a[i])
				{
					check1 = 1;
					for (long long k = j + 1; k < n; k++)
					{
						if (a[k] < a[j])
						{
							check2 = 1;
							cout << a[k] << " ";
							break;
						}
					}
					break;
				}
			}
			if (check1 == 0 || check2 == 0) cout << "-1 ";
		}
		cout << endl;

	}
}