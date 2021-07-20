#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <sstream>
#include <algorithm>
#include <queue>
using  namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, k, st;
		cin >> n >> k >> st;
		vector <int> vec[1003];
		int b[1004] = { 0 };
		while (k--)
		{
			int x, y;
			cin >> x >> y;
			vec[x].push_back(y);
			vec[y].push_back(x);
		}

		queue <int> q;
		q.push(st);
		b[st] = 1;
		while (!q.empty())
		{
			int x = q.front();
			cout << x << " ";
			q.pop();
			for (int i = 0; i < vec[x].size(); i++)
			{
				if (b[vec[x][i]] == 0)
				{
					q.push(vec[x][i]);
					b[vec[x][i]] = 1;
				}
			}
		}
		cout << endl;
	}
}