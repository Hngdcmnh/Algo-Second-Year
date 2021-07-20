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
		string a[1000];
		int b[1000] = { 0 };
		vector <char> vec;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			for(int j=0;j<a[i].size();j++)
			{
				if (b[a[i][j]] == 0)
				{
					b[a[i][j]] = 1;
					vec.push_back(a[i][j]);
				}
			}
		}
		sort(vec.begin(), vec.end());
		for (int i = 0; i < vec.size(); i++)
		{

			cout << vec[i] << " ";
		}
		cout << endl;
	}

}