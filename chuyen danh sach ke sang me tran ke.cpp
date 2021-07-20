#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <string>
#include <sstream>
using namespace std;
int a[1001][1001] = { {0} };

int convert(string s)
{
	int res = 0;
	for (int i = 0; i<s.size(); i++)
	{
		res = res * 10 + (int)(s[i] - '0');
	}
	return res;
}

int main()
{
	int n;
	cin >> n;
	cin.ignore();
	for (int i = 1; i <= n; i++)
	{
		string s;
		getline(cin, s);
		string s1 = "";
		
		for (int j = 0; j <= s.size(); j++)
		{
			if (s[j] == ' ' || j == s.size())
			{
				
				a[i][convert(s1)]=1;
				s1.clear();
			}
			else
			{
				s1 = s1 + s[j];
			}
		}
	}
	
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}