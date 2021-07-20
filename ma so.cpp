#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <string>
#include <sstream>
using namespace std;

void swap(int& a, int& b)
{
	int c = a;
	a = b;
	b = c;
}

void sinhchu(vector <string>& chu, int a[], int n)
{
	string s = "";
	for (int i = 1; i <= n; i++)
	{
		//cout << a[i];
		s = s + (char)('A' + a[i] - 1);
	}
	//cout << endl;
	chu.push_back(s);
}

void sinhso(vector <string>& so, int a[], int n)
{
	string s = "";
	for (int i = 1; i <= n; i++)
	{
		//cout << a[i];
		s = s + (char)('0'+ a[i]);
	}
	//cout << endl;
	so.push_back(s);
}

int main()
{
	int n;
	cin >> n;
	int a[100];

	for (int i = 1; i <= n; i++) a[i] = i;
	vector <string> chu;
	sinhchu(chu, a, n);
	while (true)
	{
		int i = n-1;
		while (i > 0 && a[i] > a[i + 1]) i--;
		if (i <= 0) break;
		else
		{
			int k = n;
			while (k > 0 && a[k] < a[i])k--;
			swap(a[i], a[k]);
			sort(a + i + 1, a + n+1);
			sinhchu(chu, a, n);
		}
	}

	//for (int i = 0; i < chu.size(); i++) cout << chu[i] << " ";

	for (int i = 1; i <= n; i++) a[i] = 1;
	vector <string> so;
	sinhso(so, a, n);
	while (true)
	{
		
		int i = n;
		while (i > 0 && a[i] == n) i--;
		if (i <= 0) break;
		else
		{
			a[i]++;
			for (int j = i + 1; j <= n; j++) a[j] = 1;
			sinhso(so, a, n);
		}
	}

	for (int i = 0; i < chu.size(); i++)
	{
		for (int j = 0; j < so.size(); j++)
		{
			cout << chu[i] << so[j] << endl;
		}
	}

}