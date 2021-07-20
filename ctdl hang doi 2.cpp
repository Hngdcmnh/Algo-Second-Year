#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <sstream>
#include <algorithm>
#include <queue>
using namespace std;
int main()
{
	long n;
	cin >> n;
	deque <int> a;
	for (long i = 1; i <= n; i++)
	{
		string s = "";
		cin >> s;
		if (s == "PUSH")
		{
			int x;
			cin >> x;
			a.push_back(x);
		}
		else if (s == "PUSHFRONT")
		{
			int x;
			cin >> x;
			a.push_front(x);
		}
		else if (s == "PRINTFRONT")
		{
			if (a.empty()) cout << "NONE"<<endl;
			else
			{
				cout << a.front();
				cout << endl;
			}
		}
		else if (s == "PRINTBACK")
		{
			if (a.empty()) cout << "NONE";
			else
			{
				cout << a.back();
				cout << endl;
			}
		}
		else if (s == "POP")
		{
			if (!a.empty()) a.pop_front();
		}
		else if (s == "POPBACK")
		{
			if (!a.empty()) a.pop_back();
		}

	}
}