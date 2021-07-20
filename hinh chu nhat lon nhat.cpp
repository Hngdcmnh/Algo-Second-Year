#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	long long t;
	cin >> t;
	while (t--)
	{
		long long n;
		cin >> n;
		long long a[100001];
		for (long long i = 1; i <= n; i++)
		{
			cin >> a[i];
		}

		long long l[100001] = { 0 };
		long long r[100001] = { 0 };

		stack <long long> left;
		left.push(1);
		for (long long i = 1; i <= n; i++)
		{
			while (!left.empty() && a[left.top()] >= a[i]) left.pop();
			if (left.empty())
			{
				l[i] = 1;
			}
			else
			{
				l[i] = left.top() + 1;
			}
			left.push(i);
		}

		stack <long long> right;
		right.push(n);
		for (long long i = n; i >= 1; i--)
		{
			while (!right.empty() && a[right.top()] >= a[i]) right.pop();
			if (right.empty()) r[i] = n;
			else
			{
				r[i] = right.top() - 1;
			}
			right.push(i);
		}


		/*for (long long i = 1; i <= n; i++)
		{
			cout << l[i] << " ";
		}
		cout << endl;

		for (long long i = 1; i <= n; i++)
		{
			cout << r[i] << " ";
		}
		cout << endl;*/

		long long maxx = 0;
		for (long long i = 1; i <= n; i++)
		{
			long long res = a[i] * (r[i] - l[i] + 1);
			if (res > maxx)maxx = res;
		}
		cout << maxx << endl;

	}
}