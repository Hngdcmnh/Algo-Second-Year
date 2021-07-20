#include <iostream>
#include <stack>
#include <queue>
#include <algorithm>
#include <cmath>
#include <sstream>
using namespace std;
int main()
{
	long long t;
	cin >> t;
	while (t--)
	{
		string s1, s2;
		cin >> s1 >> s2;
		reverse(s1.begin(), s1.end());
		reverse(s2.begin(), s2.end());
		long long a = 0;
		//cout<<s1<<"--"<<s2<<endl;
		for (int i = 0; i < s1.size(); i++)
		{
			if (s1[i] == '1')
			{
				a += pow(2, i);
			}
		}

		long long b = 0;
		for (int i = 0; i < s2.size(); i++)
		{
			if (s2[i] == '1')
			{
				b += pow(2, i);
			}
		}

		cout << a * b << endl;
	}
}