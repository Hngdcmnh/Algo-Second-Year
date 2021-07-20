#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <sstream>
#include <algorithm>
#include <queue>
using namespace std;
long long mod = 1e9 + 7;
bool cmp(long long a, long long b)
{
	return a > b;
}
int main()
{
	long long t;
	cin >> t;
	while (t--)
	{
		long long n;
		cin >> n;
		priority_queue<long long, vector<long long>, greater<long long> > a;
		while (n--)
		{
			long long x;
			cin >> x;
			a.push(x);
		}
		
		long long res = 0;
		while (a.size() > 1)
		{
			long long cary1 = a.top();
			a.pop();
			long long cary2 = a.top();
			a.pop();
			long long cary = (cary1 + cary2)%mod;
			res = (res  + cary)%mod;
			a.push(cary);
		}
		cout << res%mod << endl;
	}
}