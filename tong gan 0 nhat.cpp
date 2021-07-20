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
		int n;
		cin >> n;
		int a[1000];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		int minn = 1000;
		int k, h;
		for (int i = 0; i < n; i++)
		{
			for (int j = i+1; j < n; j++)
			{
				if (abs(a[i] + a[j]) < minn)
				{
					minn = abs(a[i] + a[j]);
					k = a[i];
					h = a[j];
				}
			}
		}
		cout << h+k << endl;
	}

}