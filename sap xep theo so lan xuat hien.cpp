#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <sstream>
#include <algorithm>
#include <queue>
#include<iostream>
#include<queue>
struct num
{
	int gt;
	int pos;
};
int b[1000001] = { 0 };
bool cmp(num a, num c)
{
	if (b[a.gt] != b[c.gt]) return b[a.gt] > b[c.gt];
	else
	{
		return a.gt < c.gt;
	}
}
using namespace std;
int main()
{
	//sangnt();
	long long t; cin >> t;
	while (t--)
	{
		for (int i = 0; i <= 1000000; i++)
		{
			b[i] = 0;
		}
		int n;
		cin >> n;
		num a[1000];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i].gt;
			a[i].pos = i;
			b[a[i].gt]++;
		}

		sort(a, a + n,cmp);
		for (int i=0;i<n;i++)
		{
			cout << a[i].gt << " ";
		}
		cout << endl;
	}

}