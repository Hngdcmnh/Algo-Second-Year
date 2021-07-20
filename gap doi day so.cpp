#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <sstream>
#include <algorithm>
#include <queue>
using namespace std;
long long a[51];
void tinhLen()
{
	long long i = 2;
	a[1] = 1;
	while (i <= 50)
	{
		a[i] = a[i - 1] * 2 + 1;
		i++;
	}
}
int main()
{

	long long t;
	cin >> t;
	tinhLen();
	//cout << a[50]<<endl;
	while (t--)
	{
		long long n, k;
		cin >> n >> k;
		while (1)
		{
			if (k == 1)
			{
				cout << "1" << endl;
				break;
			}
			else if (k == (a[n] + 1) / 2)
			{
				cout << n << endl;
				break;
			}
			else if (k > (a[n] + 1) / 2)
			{
				k = (a[n] + 1) / 2 - (k-(a[n] + 1) / 2 );
			}
			n--;


		}
	}
}