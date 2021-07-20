#include <iostream>
#include <stack>
#include <queue>
#include <algorithm>
#include <cmath>

bool check(int b[], int n)
{
	for (int i = 1; i <= n-1; i++)
	{
		if (b[i] < b[i+1]) return true;
	}
	return false;
}

using namespace std;
int main()
{
	int n, k;
	cin >> n >> k;
	int a[100][100];
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cin >> a[i][j];
		}
	}

	int b[10000] = { 0 };
	for (int i = 1; i <= n; i++) b[i] = i;
	vector <vector <int> > vec1;

	while (check(b, n))
	{
		next_permutation(b+1, b + n +1);
		int sum = 0;
		for (int i = 1; i <= n; i++)
		{
			sum += a[i][b[i]];
		}
		if (sum == k)
		{
			vector <int> vec;
			for (int i = 1; i <= n; i++)
			{
				vec.push_back(b[i]);
			}
			vec1.push_back(vec);

		}

	}

	cout << vec1.size()<<endl;

	for (int i = 0; i < vec1.size(); i++)
	{
		for (int j = 0; j < vec1[i].size(); j++)
		{
			cout << vec1[i][j] << " ";
		}
		cout << endl;
	}


}