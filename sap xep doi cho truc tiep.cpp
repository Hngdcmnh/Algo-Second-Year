#include <iostream>
#include <stack>
using namespace std;
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
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[j] < a[i])
			{
				swap(a[i], a[j]);
			}
		}
		cout << "Buoc " << i + 1 << ": ";
		out(a, n);
	}
}