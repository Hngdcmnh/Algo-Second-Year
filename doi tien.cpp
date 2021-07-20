#include <iostream>
#include <stack>
#include <queue>
#include <algorithm>
#include <cmath>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	int a[10] = { 1, 2, 5, 10, 20, 50, 100, 200, 500, 1000 };
	int t;
	cin >> t;
	while (t--)
	{
		int x;
		cin >> x;
		int dem = 0;
		int i = 9;
		while (x > 0)
		{
			dem = dem + x / a[i];
			x = x - (x / a[i]) * a[i];
			i--;
		}
		cout << dem << endl;
	}
}