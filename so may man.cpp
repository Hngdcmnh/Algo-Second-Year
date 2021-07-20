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
	long long t;
	cin >> t;
	while (t--)  //4x + 7y = n
	{
		long long n;
		cin >> n;
		long long k = n / 4;
		long long h = n / 7;
		

		long long dem7 = -1;
		for (long long i = 0; i <= h + 1; i++)
		{
			if (n - 7 * i < 0) break;
			if ((n - 7 * i) % 4 == 0)
			{
				dem7 = i;
			}
		}

		if ( dem7 == -1)
		{
			cout << "-1";
		}
		else
		{
			long long dem74 = (n - dem7 * 7) / 4;
			while (dem74--)cout << "4";
			while (dem7--) cout << "7";
		}
		cout << endl;
	}
}