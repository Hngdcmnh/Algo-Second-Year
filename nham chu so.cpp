#include <iostream>
#include <stack>
#include <queue>
#include <algorithm>
#include <cmath>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

long convert(string s)
{
	long a = 0;
	for (int i=0;i<s.size();i++)
	{
		a = a * 10 + (long)(s[i] - '0');
	}
	return a;
}

string doi5(string& s)
{
	for (long i = 0; i < s.size(); i++)
	{
		if (s[i] == '6') s[i] = '5';
	}
	return s;
}
string doi6(string& s)
{
	for (long i = 0; i < s.size(); i++)
	{
		if (s[i] == '5') s[i] = '6';
	}
	return s;
}

int main()
{
	string s1, s2;
	cin >> s1;
	cin >> s2;
	cout << convert(doi5(s1)) + convert(doi5(s2))<<" ";
	cout << convert(doi6(s1)) + convert(doi6(s2));
}