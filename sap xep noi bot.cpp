#include <iostream>
using namespace std;
bool check(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		if (a[i] > a[i + 1]) return true;
	}
	return false;
}

void swap(int& a, int& b)
{
	int c = a;
	a = b;
	b = c;
}

void out(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
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
	int bc = 1;
	while (check(a, n))
	{
		for (int i = 0; i < n - 1; i++)
		{
			if (a[i] > a[i + 1])
			{
				swap(a[i], a[i + 1]);
			}
		}
		
		cout << "Buoc " << bc << ": ";
		out(a, n);
		bc++;
	}
}