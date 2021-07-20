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
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int a[1000];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		sort(a, a + n);
		int b[1000];
		for (int i =n-1; i >=0 ; i--)
		{
			b[n-i-1] = a[i];
		}
		int dem = n;
		int i = 0;
		int j = 0;
		while (dem>0)
		{
			cout << b[j]<<" ";
			j++;
			dem--;
			if (dem <= 0) break;
			cout << a[i]<<" ";
			i++;
			dem--;
		}
		cout << endl;
	}
	
}