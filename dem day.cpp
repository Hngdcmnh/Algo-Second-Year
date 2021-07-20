#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <sstream>
#include <algorithm>
#include <queue>
using namespace std;
long long mod = 123456789;
long long Mu(long long n)
{
	if (n == 1) return 2%mod;
	else if (n == 0) return 1%mod;
	else if (n % 2 == 0) return ((Mu(n / 2) % mod) * (Mu(n / 2) % mod))%mod;
	else if (n%2 == 1)return ((Mu((n-1) / 2)%mod ) * ((Mu((n-1) / 2)%mod )*2))% mod;
}
int main()
{

	long long t;
	cin >> t;
	while (t--)
	{
		long long n;
		cin >> n;
		cout << Mu(n-1)<<endl;
		
	}
}