#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;
long long mod = 1e9 + 7;
long long sum(int n, int k)
{
	if (k == 1) return n;
	else if (k % 2 == 0) return ((sum(n, k / 2)%mod) * (sum(n, k / 2)%mod))%mod;
	else if (k % 2 == 1) return (n * (sum(n, k - 1)%mod))%mod;
}


int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, k;
		cin >> n >> k;
		cout << sum(n,k) << endl;
	}
}