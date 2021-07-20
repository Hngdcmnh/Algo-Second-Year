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
		queue <long long> q;
		q.push(9);
		while (true)
		{
			long long x = q.front();
			q.pop();
			if (x % n == 0)
			{
				cout << x << endl;
				break;
			}
			else
			{
				long long a = x * 10;
				q.push(a);
				long long b = x * 10 + 9;
				q.push(b);
			}
		}
	}
}