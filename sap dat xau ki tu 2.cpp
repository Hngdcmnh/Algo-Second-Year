#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <sstream>
#include <algorithm>
#include <queue>
using namespace std;
void swap(int &a, int &b)
{
	int c = a;
	a = b;
	b = c;
}
int main()
{
	long long t;
	cin >> t;
	while (t--)
	{
		int n,k;
		cin >> k;
		string s;
		cin >> s;
		n = s.size();
		int a[1000] = { 0 };
		int maxx = 0;
		for (int i = 0; i < n; i++)
		{
			a[s[i]]++;
			if (a[s[i]] > maxx) maxx = a[s[i]];
		}
		if ((maxx-1) * (k ) <= n-1) cout << "1";
		else cout << "-1";
		cout << endl;
	}
}