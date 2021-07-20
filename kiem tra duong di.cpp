#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <string>
#include <sstream>
using namespace std;
vector <int> vec[1001];
int n, k;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		for (int i = 0; i <= 1000; i++) vec[i].clear();
		cin >> n >> k;
		
		while (k--)
		{
			int x, y;
			cin >> x >> y;
			vec[x].push_back(y);
			vec[y].push_back(x);
		}

		int truyvet[1005] = { 0 };
		int b[1001] = { 0 };

		for (int k = 1; k <= n; k++)
		{
			if (b[k] == 0)
			{
				queue <int> q;
				q.push(k);
				truyvet[k] = k;

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
							truyvet[vec[x][i]] = truyvet[x];
						}
					}
				}
			}
		}
		
		/*for (int i = 1; i <= n; i++)
		{
			cout << i << "  " << truyvet[i] << endl;
		}*/

		int m;
		cin >> m;
		while (m--)
		{
			int x, y;
			cin >> x >> y;
			if (truyvet[x] == truyvet[y])
			{
				cout << "YES" << endl;
			}
			else cout << "NO"<<endl;
		}
	}
}