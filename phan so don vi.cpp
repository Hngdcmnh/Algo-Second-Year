#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <string>
#include <sstream>
using namespace std;

struct ps
{
	long long tu;
	long long mau;
};

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		ps a;
		cin >> a.tu;
		cin >> a.mau;
		while (1)
		{
			if (a.mau % a.tu == 0)
			{
				//cout << a.mau << "d" << a.tu <<"d"<<a.mau/a.tu<< endl;
				cout << "1/" << a.mau/a.tu;
				break;
			}
			else
			{
				cout << "1/";
				int x = (int)(a.mau / a.tu + 1);
				cout << x <<" + ";
	
				a.tu = a.tu * x - a.mau;
				a.mau = a.mau * x;
				
			}
		}
		cout << endl;
	}
}