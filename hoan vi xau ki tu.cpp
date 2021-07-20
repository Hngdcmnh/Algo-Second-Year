#include <iostream>
#include <stack>
#include <queue>
#include <algorithm>
#include <cmath>
using namespace std;
//void swap(int& a, int& b)
//{
//	int c = a;
//	a = b;
//	b = c;
//}
int main()
{
	int t;
	cin >> t;
	char al[27];
	al[1] = 'A';
	for (int i = 2; i <= 26; i++) al[i] = al[i - 1] + 1;
	while (t--)
	{
		string s;
		cin >> s;
		int n = s.size();
		int a[1000];
		for (int i = 1; i <= n; i++)
		{
			a[i] = i;
		}

		for (int i = 1; i <= n; i++)
		{
			cout << al[a[i]];
		}
		cout << " ";
		while (true)
		{
			int l = n-1;
			while (l > 0 && a[l] > a[l + 1]) l--;
			
			if (l <= 0)
			{
				break;
			}
			else
			{
				int k = n ;
				while (a[k] < a[l]) k--;
				swap(a[l], a[k]);
				sort(a + l + 1, a + n + 1);
				for (int l = 1; l <= n; l++)
				{

					cout << al[a[l]];
				}
				cout << " ";
			}

		}
		cout << endl;
		

	}
}