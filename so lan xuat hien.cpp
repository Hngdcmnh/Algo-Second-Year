#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <sstream>
#include <algorithm>
#include <queue>
#include<iostream>
#include<queue>
bool cmp(int a, int b)
{
	return a > b;
}
int b[1000001] = { 0 };
using namespace std;
int main()
{
	long long t; cin >> t;
	while (t--)
	{
		for (long long i = 0; i <= 1000000; i++)
		{
			b[i] = 0;
		}
		long long n,k;
		cin >> n>>k;
		long long a[100000];
		for (long long i = 0; i < n; i++)
		{
			cin >> a[i];
			b[a[i]]++;
		}
		if (b[k] == 0) cout << "-1" << endl;
		else cout << b[k] << endl;
		
	}

}