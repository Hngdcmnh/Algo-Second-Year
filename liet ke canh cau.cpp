#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <string>
#include <sstream>
using namespace std;

struct canh
{
	int i, j;
};

vector <int> vec[1003];
vector <canh> vecCanh;
int n, k;



int duyet()
{
	int b[10003] = { 0 };
	int dem = 0;
	for (int i = 1; i <= n; i++)
	{
		if (b[i] == 0)
		{
			dem++;
			queue <int> q;
			q.push(i);
			b[i] = 1;
			while (!q.empty())
			{
				int x = q.front();
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
		}
	}
	return dem;
}

void xoaCanh(canh a)
{
	int x = a.i;
	int y = a.j;
	for (int i = 0; i < vec[x].size(); i++)
	{
		if (vec[x][i] == y)
		{
			vec[x].erase(vec[x].begin() + i);
		}
	}

	for (int i = 0; i < vec[y].size(); i++)
	{
		if (vec[y][i] == x)
		{
			vec[y].erase(vec[y].begin() + i);
		}
	}
}

void themCanh(canh a)
{
	int x = a.i;
	int y = a.j;
	vec[x].push_back(y);
	vec[y].push_back(x);
	sort(vec[x].begin(), vec[x].end());
	sort(vec[y].begin(), vec[y].end());
}

bool cmp(canh a, canh b)
{
	if(a.i!=b.i) return a.i < b.i;
	return a.j < b.j;
}


int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		for (int i = 0; i <=1002; i++)
		{
			vec[i].clear();
		}
		
		vecCanh.clear();
		
		cin >> n >> k;
		while (k--)
		{
			int x, y;
			cin >> x >> y;
			vec[x].push_back(y);
			vec[y].push_back(x);
			canh canh1;
			if (x < y)
			{
				canh1.i = x;
				canh1.j = y;
			}
			else
			{
				canh1.i = y;
				canh1.j = x;
			}
			vecCanh.push_back(canh1);
		}

		int tp1 = duyet();

		vector <canh> res;
		for (int i = 0; i < vecCanh.size(); i++)
		{
			xoaCanh(vecCanh[i]);
			if (duyet() > tp1)
			{
				res.push_back(vecCanh[i]);
			}
			themCanh(vecCanh[i]);
		}

		sort(res.begin(), res.end(), cmp);
		for (int i = 0; i < res.size(); i++)
		{
			cout<<res[i].i<<" "<<res[i].j<<" ";
		}

		cout << endl;
	}
}