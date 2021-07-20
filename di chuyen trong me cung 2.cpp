#include <iostream>
#include <stack>
#include <queue>
#include <algorithm>
#include <cmath>
using namespace std;
int a[100][100] = { {0} };
int dd[100][100] = { {0} };
vector < string > vec;
int n;

void duyet(int i, int j, string s)
{
	if (i == n - 1 && j == n - 1)
	{
		vec.push_back(s);
	}

	if ( i + 1 <= n - 1 &&  a[i + 1][j] == 1 && dd[i + 1][j] == 0 )
	{
		dd[i + 1][j] = 1;
		duyet(i + 1, j, s + "D");
		dd[i + 1][j] = 0;
	}

	if (j - 1 >= 0 && a[i][j - 1] == 1 && dd[i][j - 1] == 0 )
	{
		dd[i][j - 1] = 1;
		duyet(i, j - 1, s + "L");
		dd[i][j - 1] = 0;
	}

	if (j + 1 <= n - 1 && a[i][j + 1] == 1 && dd[i][j + 1] == 0 )
	{
		dd[i][j+1] = 1;
		duyet(i, j+1, s + "R");
		dd[i][j+1] = 0;
	}

	if (i - 1 >= 0 && a[i-1][j] == 1 && dd[i-1][j] == 0)
	{
		dd[i-1][j] = 1;
		duyet(i-1, j, s + "U");
		dd[i -1][j] = 0;
	}

}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		cin >> n;
		for (int i = 0; i < 100; i++)
		{
			for (int j = 0; j < 100; j++)
			{
				a[i][j] = 0;
				dd[i][j] = 0;
			}
		}

		vec.clear();

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cin >> a[i][j];
			}
		}

		//if (a[0][0] == 0 || a[n - 1][n - 1] == 0)
		//{
		//	cout << -1 << endl;
		//	continue;
		//}

		dd[0][0] = 1;
		string s = "";
		
		duyet(0, 0, s);

		if (vec.size() == 0) cout << "-1"<<endl;
		else
		{
			for (int i = 0; i < vec.size(); i++)
			{
				cout << vec[i] << " ";
			}
			cout << endl;
		}
		
	}
}