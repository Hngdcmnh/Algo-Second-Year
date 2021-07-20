#include <iostream>
#include <stack>
#include <queue>
#include <algorithm>
#include <cmath>
using namespace std;

void check(int a[], int& dem, int k, int sum)
{
	int sum1 = 0;
	for (int i = 1; i <= k; i++)
	{
		sum1 += a[i];
	}
	if (sum1 == sum) dem++;
}

int main()
{
	int n, k, sum;
	n = 1;
	k = 1;
	sum = 1;
	while (n != 0 || k != 0 || sum != 0)
	{
		cin >> n >> k >> sum;
		if (n == 0 && k == 0 && sum == 0) return 0;
		int dem = 0;
		int a[1000];
		for (int i = 1; i <= k; i++)
		{
			a[i] = i;
		}
		check(a, dem, k, sum);
		int d = 1;
		while (d)
		{
			d = 0;
			for (int i = k; i >= 1; i--)
			{
				if (a[i] < n - k + i)
				{
					d = 1;
					a[i] += 1;

					for (int j = i + 1; j <= k; j++)
					{
						a[j] = a[j - 1] + 1;
					}

					/*for (int i = 1; i <= k; i++)
					{
						cout << a[i] << " ";
					}
					cout << endl;*/

					check(a, dem, k, sum);
					break;
				}
			}
		}
		cout << dem << endl;
	}

}