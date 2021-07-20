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
		int n, k;
		cin >> n >> k ;
		vector <int> vec[1003];
		
		while (k--)
		{
			int x, y;
			cin >> x >> y;
			vec[x].push_back(y);
			vec[y].push_back(x);
		}
		int b[1004] = { 0 };
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
		cout << dem<<endl;
	}
}