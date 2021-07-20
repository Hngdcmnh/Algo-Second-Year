#include <iostream>
#include <stack>
#include <queue>
#include <algorithm>
#include <cmath>
using namespace std;
int a[1000];
int b[1000] = { 0 };
//vector <int> vec[1000];
int n, k;
int dem=0;
void swap(int& a, int& b)
{
	int c = a;
	a = b;
	b = c;
}

void out(int a[], int n)
{
	for (int i = 1; i <= n; i++)
	{
		if (a[i] == 1) cout << b[i] <<" ";
	}
	cout << endl;
}

bool check(int a[], int n)
{		
	long sum = 0;
	for (int i = 1; i <= n; i++) 
	{
		if (a[i] == 1) sum += b[i];
	}
	if (sum == k) 
	{
	    dem++;
	    return true;
	}
	else return false;
}

int main()
{
	int t;
	/*cin >> t;*/
	t = 1;
	while (t--)
	{
		
		cin >> n>>k;
		
		for (int i = 1; i <= n; i++)
		{
			cin >> b[i];
		}
		for (int i = 1; i <= n; i++) a[i] = 0;
		if (check(a, n)) out(a, n);
		while (true)
		{
			int i = n;
			while (i > 0 && a[i] == 1) i--;
			if (i == 0) break;
			else
			{
				a[i] = 1;
				for (int j = i + 1; j <= n; j++) a[j] = 0;
				if (check(a, n)) out(a, n);
			}
		}
		cout<<dem;

	}
}