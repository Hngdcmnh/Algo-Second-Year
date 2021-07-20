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
		int n, s, m;
		cin >> n >> s >> m;
		if (m > n)
		{
			cout << "-1" << endl;
			continue;
		}
		if (s >= 7)
		{
			if (m * 7 > 6 * n)
			{
				cout << "-1" << endl;
				continue;
			}
		}
		
		if ((m * s) % n != 0)
		{
			cout << m * s / n + 1 << endl;
		}
		else cout << m * s / n << endl;
	}
}