#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <string>
#include <sstream>
using namespace std;
string s;
int res[102][102] = { {0} };

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		cin >> s;
		s = "0" + s;
		for (int i = 0; i <= 101; i++)
		{
			for (int j = 0; j <= 101; j++) res[i][j] = 0;
		}

		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				if (s[i] == s[j] && i != j)
				{
					res[i][j] = res[i - 1][j - 1] + 1;
				}
				else
				{
					res[i][j] = max(res[i - 1][j], res[i][j - 1]);
				}
			}
		}
		cout << res[n][n] << endl;
	}
}