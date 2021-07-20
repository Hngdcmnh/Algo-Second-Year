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
using namespace std;
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n,k;
		cin >> n>>k;
		int a[1000];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		sort(a, a + n, cmp);
		for (int i = 0; i < k; i++)
		{
			cout << a[i] << " ";
		}
		cout << endl;
	}

}