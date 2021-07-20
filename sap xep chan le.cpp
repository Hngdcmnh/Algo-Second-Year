#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <string>
#include <sstream>
using namespace std;

bool cmp(int a, int b)
{
	return a > b;
}

int main()
{
	int n;
	cin >> n;
	priority_queue <int, vector <int>, greater<int> > chan;
	priority_queue <int, vector <int>, less<int> > le;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		if (i % 2 == 0) chan.push(x);
		else le.push(x);
	}
	while (!le.empty() || !chan.empty())
	{
		cout << chan.top()<<" ";
		chan.pop();
		if (le.empty()) return 0;
		cout << le.top() << " ";
		le.pop();
	}
	
	return 0;
}