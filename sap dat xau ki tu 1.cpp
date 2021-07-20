#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <sstream>
#include <algorithm>
#include <queue>
using namespace std;

int main()
{
	long long t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		int n = s.size();
		int a[1000] = {0};
		int maxx = 0;
		for (int i = 0; i < n; i++)
		{
			a[s[i]]++;
			if (a[s[i]] > maxx) maxx = a[s[i]];
		}
		if ((n % 2 == 0 && maxx <= n / 2) || (n % 2 == 1 && maxx <= n / 2 + 1)) cout << "1";
		else cout << "-1";
		cout << endl;
	}
}