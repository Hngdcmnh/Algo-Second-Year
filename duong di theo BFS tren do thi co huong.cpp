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
		long long n, k, start, finish;
		cin >> n >> k >> start >> finish;
		long long dd[10000] = { 0 };
		long long truyvet[10000] = { 0 };
		vector <long long> vec[1000 + 1];
		while (k--)
		{
			long long x, y;
			cin >> x >> y;
			vec[x].push_back(y);
		}
		int check = 0;
		queue <long long> q;
		q.push(start);
		dd[start] = 1;
		while (!q.empty())
		{
			long long x = q.front();
			q.pop();
			for (long long i = 0; i < vec[x].size(); i++)
			{
				if (dd[vec[x][i]] == 0)
				{

					q.push(vec[x][i]);
					dd[vec[x][i]] = 1;
					truyvet[vec[x][i]] = x;
					if (vec[x][i] == finish)
					{
						check = 1;
						goto aa;
						
					}

				}
			}
		}
	aa:;
		//cout << "oo" << truyvet[3];
		if (check == 0) 
		{
			cout << "-1" << endl;
			continue;
		}
		vector <long long> road;
		while (finish != start)
		{
			//cout <<"ddd"<< finish << endl;
			road.push_back(finish);
			finish = truyvet[finish];
		}
		cout << start << " ";
		for (long long i = road.size() - 1; i >= 0; i--)
		{
			cout << road[i] << " ";
		}

		cout << endl;
	}
}