#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <sstream>
#include <algorithm>
#include <queue>
#include<iostream>
#include<queue>
//int b[1000001] = { 0 };
//void sangnt()
//{
//	b[0] = 1;
//	b[1] = 1;
//	for (int i = 2; i <= 1000000; i++)
//	{
//		if (b[i] == 0)
//		{
//			for (int j = 2*i; j <= 1000000; j = j + i)
//			{
//				b[j] = 1;
//			}
//		}
//	}
//}
long long a[1000001];
long long b[1000001];
using namespace std;
int main()
{
	//sangnt();
	long long t; cin >> t;
	while (t--)
	{
		int n,m;
		cin >> n>>m;
		priority_queue <long, vector <long>, greater<long> > q;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			q.push(a[i]);
		}
		for (int i = 0; i < m; i++)
		{
			cin >> b[i];
			q.push(b[i]);
		}
		while (!q.empty())
		{
			cout << q.top() << " ";
			q.pop();
		}
		cout << endl;
	}

}