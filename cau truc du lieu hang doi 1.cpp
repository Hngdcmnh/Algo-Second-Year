#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <sstream>
#include <algorithm>
#include <queue>
#include<iostream>
#include<queue>
using namespace std;
int main()
{
	int t; cin >> t;
	while (t--)
	{
		queue <long> q;
		int n;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			int choose; cin >> choose;
			switch (choose)
			{
				case 1:
				{
					cout << q.size() << endl;
				}break;

				case 2:
				{
					if (q.size() == 0) cout << "YES" << endl;
					else cout << "NO" << endl;
				}break;

				case 3:
				{
					long x; cin >> x;
					q.push(x);
				}break;
				case 4:
				{
					if (q.size() != 0) q.pop();
				}break;
				case 5:
				{
					if (q.size() != 0) cout << q.front() << endl;
					else cout << "-1" << endl;
				}break;
				case 6:
				{
					if (q.size() != 0)
					{
						cout << q.back() << endl;
					}
					else cout << "-1" << endl;
				}break;
			}
		}
		cout << endl;
	}
}