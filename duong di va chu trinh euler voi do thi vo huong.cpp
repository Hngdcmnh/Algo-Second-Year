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
		int n, k;
		cin >> n >> k;
		vector <int> vec[1003];
		while (k--)
		{
			int x, y;
			cin >> x >> y;
			vec[x].push_back(y);
			vec[y].push_back(x);
		}
		int dem = 0;
		for (int i = 1; i <= n; i++)
		{
			if (vec[i].size() % 2 == 0)
			{
				dem++;
			}
		}
		if (dem == n)
		{
			cout << "2" << endl;
		}
		else if (dem == n - 2)
		{
			cout << "1" << endl;
		}
		else cout << 0 << endl;
	}
}