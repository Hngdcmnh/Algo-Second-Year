#include <iostream>
#include <stack>
#include <queue>
#include <algorithm>
#include <cmath>
#include <map>
#include <vector>
using namespace std;
int main()
{
	long long a[10001] = { 0 };
	a[1] = 1;
	int id2 = 1;
	int id3 = 1;
	int id5 = 1;
	for (int i = 2; i <= 10000; i++)
	{
		a[i] =min( min(a[id2] * 2, a[id3] * 3), a[id5] * 5);
		if (a[i] == a[id2] * 2) id2++;
		if (a[i] == a[id3] * 3) id3++;
		if (a[i] == a[id5] * 5) id5++;
	}
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		cout << a[n] << endl;
	}
}