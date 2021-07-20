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
			vec[y].push_back(x);
		}
		stack <long long> s;
		s.push(start);
		dd[start] = 1;
		while (!s.empty())
		{
			long long x = s.top();
			s.pop();
			for (long long i = 0; i < vec[x].size(); i++)
			{
				if (dd[vec[x][i]] == 0)
				{
					s.push(x);
					s.push(vec[x][i]);
					dd[vec[x][i]] = 1;
					truyvet[vec[x][i]] = x;
					if (vec[x][i] == finish)
					{
						goto aa;
					}
					break;
				}
			}
		}
	aa:;
		//cout << "oo" << truyvet[3];
		vector <long long> road;
		while (finish != start)
		{
			//cout <<"ddd"<< finish << endl;
			road.push_back(finish);
			finish = truyvet[finish];
		}
		cout << start<<" ";
		for (long long i = road.size() - 1; i >= 0; i--)
		{
			cout << road[i] << " ";
		}
		
		cout << endl;
	}
}