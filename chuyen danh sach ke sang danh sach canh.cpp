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
	int n = t;
	cin.ignore();
	vector < vector <int> > a(n + 1);
	for (int j = 1; j <= n; j++)
	{
		string s;
		getline(cin, s);
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] <= '9' && s[i] >= '0')
			{
				int k = 0;
				while (s[i] <= '9' && s[i] >= '0')
				{
					k = k * 10 + s[i] - '0';
					i++;
				}
				/*cout << j << "---" << k << endl;*/
				if (k > j)
				{
					a[j].push_back(k);
					/*cout << k << endl;*/
				}
				
			}
			
		}
	}
	
	/*cout << "KKK";*/
	for (int i = 1; i < a.size(); i++)
	{
		/*cout << a[i].size();*/
		sort(a[i].begin(), a[i].end());
		for (int k = 0; k <a[i].size(); k++)
		{
			cout << i << " " << a[i][k] << endl;
		}
	}
}