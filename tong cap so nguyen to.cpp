#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <sstream>
#include <algorithm>
#include <queue>
#include<iostream>
#include<queue>
int b[1000001] = { 0 };
void sangnt()
{
	b[0] = 1;
	b[1] = 1;
	for (int i = 2; i <= 1000000; i++)
	{
		if (b[i] == 0)
		{
			for (int j = 2*i; j <= 1000000; j = j + i)
			{
				b[j] = 1;
			}
		}
	}
}
using namespace std;
int main()
{
	sangnt();
	long long t; cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int check = 0;
		for (int i = 1; i <=n/2; i++)
		{
			if (b[i] == 0 && b[n - i] == 0)
			{
				cout << i << " " << n - i<<endl;
				check = 1;
				break;
			}
		}
		if (check == 0) cout << "-1" << endl;
	}

}