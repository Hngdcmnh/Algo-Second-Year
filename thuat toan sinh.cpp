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

void out(int a[], int n)
{
	for (int i = 1; i <= n; i++)
	{
		cout << a[i]<<" ";
	}
	cout << endl;
}

bool check(int a[], int n)
{								 // 1 2 3 4 5
	for (int i = 1; i <= n; i++) // 1 2 3 2 1
	{
		if (a[i] != a[n - i+1])
		{
			return false;
		}
	}
	return true;
}

int main()
{
	int t;
	/*cin >> t;*/
	t = 1;
	while (t--)
	{
		int n;
		cin >> n;
		int a[1000];
		for (int i = 1; i <= n; i++) a[i] = 0;
		if (check(a, n)) out(a, n);
		while (true)
		{
			int i = n;
			while (i > 0 && a[i] == 1) i--;
			if (i == 0) break;
			else
			{
				a[i] = 1;
				for (int j = i + 1; j <= n; j++) a[j] = 0;
				if (check(a, n)) out(a, n);
			}
		}

	}
}