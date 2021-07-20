#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <string>
#include <sstream>
using namespace std;
int a[1001] = { 0 };
int n, k;
vector <int> vec[1001];

void reset()
{
	for (int i = 0; i <= 1000; i++)
	{
		a[i] = 0;
	}
}

bool check()
{
	for (int i = 1; i <= n; i++)
	{
		if (a[i] == 0) return true;
	}
	return false;
}

void duyet(int i)
{
	queue <int> q;
	q.push(i);
	a[i] = 1;
	while (!q.empty())
	{
		int x = q.front();
		q.pop();
		for (int i = 0; i < vec[x].size(); i++)
		{
			if (a[vec[x][i]] == 0)
			{
				q.push(vec[x][i]);
				a[vec[x][i]]=1;
			}
		}
	}
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		
		cin >> n >> k;
		for (int i = 0; i <= 1000; i++)
		{
			vec[i].clear();
		}

		while (k--)
		{
			int x, y;
			cin >> x >> y;
			vec[x].push_back(y);
		}

		for (int i = 1; i <= n; i++)
		{
			reset();
			duyet(i);
			if (check())
			{
				cout << "NO"<<endl;
				goto aa;
			}
		}
		cout << "YES"<<endl;
	aa:;
	}
	
}