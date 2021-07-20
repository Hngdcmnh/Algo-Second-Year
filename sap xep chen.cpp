#include <iostream>
#include <stack>
#include <vector>
using namespace std;
void swap(int& a, int& b)
{
	int c = a;
	a = b;
	b = c;
}

void out(string s)
{
	for (int i = 0; i < s.size(); i++)
	{
		cout << s[i] << " ";
	}
	cout << endl;
}
int main()
{
	int n;
	cin >> n;
	int a[1000];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	int i, j, key;
	for (i = 0; i < n; i++)
	{
		int dem=0;
		key = a[i];
		j = i - 1;
		while (j >= 0 && a[j] > key)
		{
			dem++;
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = key;
		cout << "Buoc " << i << ": ";
		for (int k = 0; k <= i; k++)
		{
			cout << a[k] << " ";
		}
		cout << endl;
	}
	
}