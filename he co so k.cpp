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
	int t;
	cin >> t;
	while (t--)
	{
		int k;
		string a, b;
		cin >> k >> a >> b;
		while (a.size() < b.size())a = "0" + a;
		while (a.size() > b.size())b = "0" + b;

		string s = "";
		int du = 0;
		for (int i = a.size() - 1; i >= 0; i--)
		{
			int x = a[i] - '0' + b[i] - '0' + du;
			if (x - k >= 0)
			{
				du = x/k ;
				s = (char)(x % k + '0') + s;
			}
			else
			{
				du = 0;
				s = (char)(x + '0') + s;
			}
		}
		if (du > 0) s = (char)(du + '0') + s;
		cout << s << endl;
	}
}