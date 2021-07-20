#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <string>
#include <sstream>
using namespace std;

long long cheo1[100] = { 0 };
long long cheo2[100] = { 0 };
long long doc[100] = { 0 };
long long ngang[100] = { 0 };
long long res = 0;
long long a[10][10];
long long maxx = 0;
void duyet(long long i)
{
	if (i > 8) return;
	for (long long j = 1; j <= 8; j++)
	{
		if (cheo1[i + 8 - j] == 0 && cheo2[i + j - 1] == 0 && doc[j]==0 && ngang[i]==0)
		{
			res += a[i][j];
			if (i==8 && maxx < res)maxx = res;
			cheo1[i + 8 - j] = 1;
			cheo2[i + j - 1] = 1;
			doc[j] = 1;
			ngang[i] = 1;
			duyet(i + 1);
			cheo1[i + 8 - j] = 0;
			cheo2[i + j - 1] = 0;
			doc[j] = 0;
			ngang[i] = 0;
			res -= a[i][j];

		}
	}
}

int main()
{
	long long t;
	cin >> t;
	while (t--)
	{

		for (long long i = 0; i < 100; i++)
		{
			cheo1[i] = 0;
			cheo2[i] = 0;
			doc[i] = 0;
			ngang[i] = 0;
		}
		res = 0;
		maxx = 0;
		
		for (long long i = 1; i <= 8; i++)
		{
			for (long long j = 1; j <= 8; j++)
			{
				cin >> a[i][j];
			}

		}
		
		duyet(1);
		cout << maxx << endl;


	}
}