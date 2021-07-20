#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <sstream>
#include <algorithm>
#include <queue>
using namespace std;
int a[100][100] = { 0 };
int b[100][100] = { 0 };
vector <int> vec;
int maxx = 0;
int n, k;
void duyet(int i)
{
	for (int j = 0; j < n; j++)
	{
		if (a[i][j] == 1)
		{
			a[i][j] = 0;
			a[j][i] = 0;
			vec.push_back(j);
			/*for (int k = 0; k < vec.size(); k++)
			{
				cout << vec[k] << " ";
			}
			cout << endl;*/
			if (maxx < vec.size()) maxx = vec.size();
			duyet(j);
			a[i][j] = 1;
			a[j][i] = 1;
			vec.pop_back();
		}
	}
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		maxx = 0;
		vec.clear();
		cin >> n>>k;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				a[i][j] = 0;
			}
		}
		while (k--)
		{
			int x ;
			int y ;
			cin >> x >> y;
			a[x][y] = 1;
			a[y][x] = 1;
		}

		for (int i = 0; i < n; i++)
		{
			vec.push_back(i);
			duyet(i);
			vec.pop_back();
		}
		cout << maxx-1 << endl;
	}
}