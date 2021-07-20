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

using namespace std;
int main()
{
	//sangnt();
	long long t; cin >> t;
	while (t--)
	{
		long long b[100000] = { 0 };
		int n;
		cin >> n;
		int minn = 1000;
		int maxx = 0;
		priority_queue <long, vector <long>, greater<long> > q;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			if (b[a[i]] == 0) q.push(a[i]);
			b[a[i]]++;
			if (a[i] > maxx) maxx = a[i];
			if (a[i] < minn)minn = a[i];

		}
		if (q.size() >= 2)
		{
			cout << q.top() << " ";
			q.pop();
			cout << q.top() << endl;
		}
		else cout << "-1" << endl;
	}

}