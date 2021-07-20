#include <iostream>
#include <stack>
#include <queue>
#include <algorithm>
#include <cmath>
#include <map>
#include <vector>
using namespace std;
int search(int a[], int i, int n, int k)
{
	if (i > n) return -1;
	int x = (i + n) / 2;
	if (a[x] > k) return search(a, i, x - 1, k);
	else if (a[x] == k) return x+1;
	else if (a[x] < k) return search(a, x + 1, n, k);
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, k;
		cin >> n >> k;
		int a[100001];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			
		}
		if (search(a, 0, n, k) != -1)
		{
			cout << search(a, 0, n, k) << endl;
		}
		else cout << "NO" << endl;
	}
	
}