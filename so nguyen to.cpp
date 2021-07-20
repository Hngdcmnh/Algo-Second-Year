#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <string>
#include <sstream>
using namespace std;
int a[1000] = { 0 };
int c[1000] = { 0 };
vector <int> b;
int n, p, s;
vector < vector<int> > vec;

void sangnt()
{
	a[0] = 0;
	a[1] = 0;
	for (int i = 2; i < 1000; i++)
	{
		if (a[i] == 0)
		{
			for (int j = i * 2; j < 1000; j = j + i)
			{
				a[j] = 1;
			}
		}
	}
}

void duyet(int id, int sum, vector <int>& vec1)
{
	if (sum > s || b[p] > s || id >= b.size()) return;

	if (sum == s && vec1.size() == n)
	{
		vec.push_back(vec1);
		return;
	}

	for (int i = id; i < b.size(); i++)
	{
		if (sum + b[i] <= s && vec1.size() < n && c[i] == 0)
		{
			c[i] = 1;
			vec1.push_back(b[i]);
			duyet(id + 1, sum + b[i], vec1);
			c[i] = 0;
			vec1.pop_back();
			duyet(id + 1, sum, vec1);
			break;
		}
	}

}

int main()
{
	sangnt();
	for (int i = 0; i <= 200; i++)
	{
		if (a[i] == 0) b.push_back(i);

	}
	int t;
	cin >> t;
	while (t--)
	{
		vec.clear();
		cin >> n >> p >> s;

		vector <int> vec1;
		vec1.clear();
		int sum = 0;
		int id = 0;

		for (int i = 0; i <= 200; i++) c[i] = 0;

		for (int i = 0; i < b.size(); i++)
		{
			
			id = i;
			if (b[id] > p)
			{
				break;
			}
		}

		duyet(id, sum, vec1);

		cout << vec.size() << endl;
		for (int i = 0; i < vec.size(); i++)
		{
			for (int j = 0; j < vec[i].size(); j++)
			{
				cout << vec[i][j] << " ";
			}
			cout << endl;
		}
	}
}