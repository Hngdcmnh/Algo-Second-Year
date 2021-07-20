#include <iostream>
#include <stack>
#include <queue>
#include <algorithm>
#include <cmath>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

//long long a[1000002];
//long long mod = 1e9+7;
int main()
{
	long long t;
	cin >> t;
	while (t--)
	{
		int n1, n2,k;
		cin >> n1 >> n2>>k;
		int loop = n1 + n2;
		vector <int> vt;
		while (loop--)
		{
			int x;
			cin >> x;
			vt.push_back(x);
		}
		sort(vt.begin(), vt.end());
		cout << vt[k - 1]<<endl;

	}
}