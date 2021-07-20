#include <iostream>
#include <stack>
#include <queue>
#include <algorithm>
#include <cmath>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

//long long a[1000002];
//long long mod = 1e9+7;
int main()
{
	long long t;
	cin >> t;
	while (t--)
	{
		int n1, n2;
		cin >> n1 >> n2;
		int a[100001] = { 0 };
		int b[100001] = { 0 };
		for (int i = 0; i < n1; i++)
		{
			int x;
			cin >> x;
			a[x] = 1;
		}
		for (int i = 0; i < n2; i++)
		{
			int x;
			cin >> x;
			if (a[x] == 1) b[x] = 1;
			else b[x] = 2;
		}

		for (int i = 0; i <= 100000; i++)
		{
			if (a[i] == 1 || b[i] == 2) cout << i<<" ";
		}
		cout << endl;

		for (int i = 0; i <= 100000; i++)
		{
			if ( b[i] == 1) cout << i << " ";
		}
		cout << endl;

	}
}