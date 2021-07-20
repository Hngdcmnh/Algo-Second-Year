#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <sstream>
using namespace std;

int a[100][100];
int cot[100] = { 0 };
int xuoi[100] = { 0 };
int ngc[100] = { 0 };
int dem = 0;
int n;

void check(int i)
{
	for (int j = 1; j <= n; j++)
	{
		if (!a[i][j] && !xuoi[i - j + n] && !ngc[i + j - 1] && !cot[j])
		{
			
			cot[j] = 1;
			xuoi[i - j + n] = 1;
			ngc[i + j - 1] = 1;
			if (i == n) dem++;
			else check(i + 1);
			cot[j] = 0;
			xuoi[i - j + n] = 0;
			ngc[i + j - 1] = 0;
		}
	}
}


int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		cin >> n;
		cot[100] = { 0 };
		xuoi[100] = { 0 };
		ngc[100] = { 0 };
		dem = 0;
		
		check(1);
		cout << dem << endl;
	}
}