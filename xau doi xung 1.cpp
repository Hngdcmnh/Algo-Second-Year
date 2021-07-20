#include <iostream>
#include <stack>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		int a[100];
		int b[100];
		int n = s.size();
		for (int i = 0; i <= s.size() - 1; i++)
		{
			a[i + 1] = s[i];
			b[n - i] = s[i];
		}

		
		int res[100][100] = { {0} };
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				if (a[i] == b[j])
				{
					res[i][j] = res[i - 1][j - 1] + 1;
				}
				else
				{
					res[i][j] = max(res[i - 1][j], res[i][j - 1]);
				}
			}
		}
		cout << n - res[n][n] << endl;
	}
}