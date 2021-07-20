#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <sstream>
#include <algorithm>
#include <queue>
using namespace std;
void swap(char& a, char& b)
{
	char c = a;
	a = b;
	b = c;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int stt;
		cin >> stt;
		string s;
		cin >> s;
		cout << stt << " ";
		while (true)
		{
			int i = s.size()-2;
			while (i > 0 && s[i] >= s[i + 1]) i--;
			if (i == 0)
			{
				cout << "BIGGEST" << endl;
				break;
			}
			else
			{
				int k = s.size() - 1;
				while (k>0 && s[k] <= s[i])k--;
				//cout << s[i] << "----" << s[k] << endl;
				swap(s[i], s[k]);
				sort(s.begin()+i+1 , s.end());
				cout << s << endl;
				break;
			}
		}

		

	}

}