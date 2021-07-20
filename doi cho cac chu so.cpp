#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int k;
		cin >> k;
		string s;
		cin >> s;
		for (int i = 0; i < s.size(); i++)
		{
			int id = s.size() - 1;
			int maxx = s[s.size()-1];
			for (int j = s.size() - 1; j >= i+1; j--)
			{
				if (maxx < s[j])
				{
					maxx = s[j];
					id = j;
				}
			}

			if (maxx > s[i] && k>0)
			{
				char x = s[i];
				s[i] = s[id];
				s[id] = x;
				k--;
			}


		}
		cout << s << endl;
	}
}