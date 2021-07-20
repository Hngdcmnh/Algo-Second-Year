#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <sstream>
#include <algorithm>
#include <queue>
using namespace std;
long long a[1000001];
int main()
{
	long long t;
	cin >> t;
	while (t--)
	{
		long long n, k;
		cin >> n >> k;
		
		long long pos = -1;
		for (long long i = 0; i < n; i++)
		{
			cin >> a[i];
			if (a[i] <= k) pos = i + 1;
		}
		cout << pos << endl;
		
	}
}