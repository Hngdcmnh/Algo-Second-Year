#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <sstream>
#include <algorithm>
#include <queue>
using namespace std;
void swap(int &a, int &b)
{
	int c = a;
	a = b;
	b = c;
}
int main()
{
	long long t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int a[1000];
		int b[1000];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			b[i] = a[i];
		}
		for (int i = 0; i < n/2; i++)
		{
			if (a[i] > a[n - i - 1]) swap(a[i], a[n - i - 1]);
		}
		/*for (int i = 0; i < n; i++)
		{
			cout << a[i] << " ";
		}
		cout << endl;*/
		sort(b, b + n);
		for (int i = 0; i < n; i++)
		{
			if (a[i] != b[i])
			{
				cout << "No" << endl;
				goto aa;
			}
		}
		cout << "Yes"<<endl;
	aa:;
	}
}