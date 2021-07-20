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
		for (int i = 1; i <= n; i++)
		{
			a[i] = i;
			cout << n- a[i]+1;
		}
		cout << " ";
		while(true)
		{
			int i = n - 1;
			while (i > 0 && a[i] > a[i + 1]) i--;
			if (i == 0)
			{
				break;
			}
			else
			{
				int k = n;
				while (a[k] < a[i])k--;
				swap(a[k], a[i]);
				sort(a + i + 1, a + n + 1);
				for (int h = 1; h <= n; h++) cout << n-a[h]+1 ;
				cout << " ";
			}

		}
		
		cout << endl;
	}
}