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
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		string s;
		cin >> s;
		int a[1000] = { 0 };
		priority_queue<int, vector<int>, less<int> > q;
		for (int i = 0; i < s.size(); i++)
		{
			a[s[i]]++;
		}
		for (int i = 'A'; i <= 'Z'; i++)
		{
			if (a[i] != 0)
			{
				q.push(a[i]);
			}
		}

		while (n--)
		{
			int x = q.top();
			q.pop();
			x--;
			q.push(x);
		}
		long long sum = 0;
		while (!q.empty())
		{
			int x = q.top();
			q.pop();
			sum += x * x;
		}
		cout << sum << endl;
	}
}