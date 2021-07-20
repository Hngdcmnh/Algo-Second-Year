#include <iostream>
#include <stack>
#include <queue>
#include <algorithm>
#include <cmath>
using namespace std;
void swap(int& a, int& b)
{
	int c = a;
	a = b;
	b = c;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int a[1000];
		for (int i = 0; i < n; i++)
		{
			cin>> a[i];
		}

		int i = n - 2;
		while (i >= 0 && a[i] > a[i + 1]) i--;
		if (i < 0)
		{
			for (int i = 1; i <= n; i++)
			{
				cout << i << " ";
			}
			cout << endl;
		}
		else
		{
			int k = n - 1;
			while (a[k] < a[i]) k--;
			swap(a[i], a[k]);
			sort(a + i +1 , a + n );
			for (int i = 0; i < n; i++)
			{
				cout << a[i] << " ";
			}
			cout << endl;
		}

	}
}