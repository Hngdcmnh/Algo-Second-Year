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
		for (int i = 0; i < 1000001; i++) b[i] = 0;
		int n, k;
		cin >> n >> k;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			b[a[i]]++;
		}
		if (b[k] != 0) cout << "1" << endl;
		else cout << "-1" << endl;
	}

}