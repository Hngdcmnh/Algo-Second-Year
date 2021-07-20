#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <string>
#include <sstream>
using namespace std;
long long a[1001][1001] = { {0} };
long long b[10000] = { 0 };
long long n, k;

struct canh
{
	int x;
	int y;
};

long long duyet()
{
	long long dem = 0;
	for (long long i = 1; i <= n; i++)
	{
		if (b[i] == 0)
		{
			b[i] = 1;
			dem++;
			queue <long long> q;
			q.push(i);
			while (!q.empty())
			{
				long long x = q.front();
				q.pop();
				for (long long k = 1; k <= n; k++)
				{
					if (a[x][k] == 1 && b[k] == 0)
					{
						q.push(k);
						b[k] = 1;
					}
				}
			}
		}
	}
	return dem;
}

int main()
{
	long long t;
	cin >> t;
	while (t--)
	{
		for (long long i = 0; i < 10000; i++) b[i] = 0;
		for (int i = 0; i <= 1000; i++)
		{
			for (int j = 0; j <= 1000; j++) a[i][j] = 0;
		}

		vector <canh> vec;

		cin >> n >> k;
		while (k--)
		{
			long long x, y;
			cin >> x >> y;
			canh canh1;
			canh1.x = x;
			canh1.y = y;
			vec.push_back(canh1);
			a[x][y] = 1;
			a[y][x] = 1;
		}
		long long dem = 1;
		dem = duyet();


		//for (long long i = 0; i < vec.size(); i++)
		//{
		//	for (long long j = 0; j < 10000; j++) b[j] = 0;
		//	
		//	a[vec[i].x][vec[i].y] = 0;
		//	a[vec[i].y][vec[i].x] = 0;
		//	long long dem1 = duyet();
		//	if (dem1 != dem) cout << vec[i].x << " "<<vec[i].y<<" ";
		//	a[vec[i].x][vec[i].y] = 1;
		//	a[vec[i].y][vec[i].x] = 1;
		//	/*cout << "oo";*/

		//}
		cout <<dem<< endl;
	}
}