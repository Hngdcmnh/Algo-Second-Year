#include <iostream>
#include <stack>
#include <queue>
#include <algorithm>
#include <cmath>
using namespace std;
int check = 0;
void duyet(int a[], int i, int n, int sum, int res, vector <int> &vt)
{
	if (res == sum)
	{
		check = 1;
		cout << "[";
		for (int i = 0; i < vt.size()-1; i++)
		{
			cout << vt[i] << " ";
		}
		cout << vt[vt.size() - 1];
		cout << "] ";
		return;
	}
	if (i >= n) return;
	if (res + a[i] <= sum)
	{
		vt.push_back(a[i]);
		duyet(a, i + 1, n, sum, res + a[i], vt);
		vt.erase(vt.begin()+vt.size()-1/*, vt.begin() + vt.size() - 1*/);
	}
	duyet(a, i + 1, n, sum, res, vt);
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		check = 0;
		int n, sum;
		cin >> n >> sum;
		int a[1000];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		sort(a, a + n);
		vector <int> vt;
		duyet(a, 0, n, sum, 0, vt);
		if (check == 0) cout << "-1";
		cout << endl;
	}
	
}