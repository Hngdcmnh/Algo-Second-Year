#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <string>
#include <sstream>
using namespace std;

struct tgian
{
	int bd;
	int kt;
};

bool cmp(tgian a, tgian b)
{
	if (a.kt != b.kt) return a.kt < b.kt;
	else
	{
		return a.bd < b.bd;
	}
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		tgian a[10000];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i].bd;
		}
		for (int i = 0; i < n; i++)
		{
			cin >> a[i].kt;
		}
		sort(a, a + n, cmp);
		int dem = 1;
		int i = 0;
		for (int j = 1; j < n; j++)
		{
			if (a[i].kt <= a[j].bd)
			{
				i = j;
				dem++;
			}
		}
		cout << dem << endl;
	}
}