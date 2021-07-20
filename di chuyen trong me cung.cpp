#include <iostream>
#include <stack>
#include <queue>
#include <algorithm>
#include <cmath>
using namespace std;
vector <string> vt;
void duyet(int i, int j, int n, string s, vector <vector <int> > a, vector <string> &vt)
{
	if (i == n - 1 && j == n - 1 && a[i][j]==1)
	{
		//cout << s<<" ";
		vt.push_back(s);
		//cout << vt.size() << endl;
		return;
	}
	if (i + 1 <= n - 1 && a[i + 1][j] == 1) duyet(i + 1, j, n, s + "D", a, vt);
	if (j + 1 <= n - 1 && a[i][j + 1] == 1) duyet(i, j + 1, n, s + "R", a, vt);
	return;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		vt.clear();
		int n;
		cin >> n;
		vector <vector <int> > a(n, vector <int>(n, 0));
		int b[100][100] = { {0} };
		
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++) cin >> a[i][j];
		}
		if (a[0][0] == 0 || a[n - 1][n - 1] == 0)
		{
			cout << "-1" << endl;
			continue;
		}
		string s = "";
		duyet(0, 0, n, s, a, vt);
		if (vt.size() == 0) cout << "-1";
		for (int i = 0; i < vt.size(); i++)
		{
			cout << vt[i] << " ";
		}
		
		cout << endl;
	}
}