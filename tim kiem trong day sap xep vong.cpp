#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <sstream>
#include <algorithm>
#include <queue>
#include<iostream>
#include<queue>
long long b[1000001] = { 0 };
long long a[1000001];
using namespace std;
int main()
{
	//sangnt();
	long long t; cin >> t;
	while (t--)
	{
		int n, k;
		cin >> n >> k;
		int res = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			if (a[i] == k) res = i + 1;
		}
		cout << res << endl;
	}

}