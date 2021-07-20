#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <string>
#include <sstream>
using namespace std;

struct gt
{
	int num;
	int bac;
};

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		gt a;
		a.bac = 0;
		a.num = n;
		queue <gt> q;
		q.push(a);
		while (!q.empty())
		{
			gt x = q.front();
			q.pop();
			if (x.num % 2 == 0 )
			{
				q.push({ x.num / 2,x.bac + 1 });
			}
			if (x.num % 3 == 0)
			{
				q.push({ x.num / 3,x.bac + 1 });
			}
			if (x.num == 1)
			{
				cout << x.bac << endl;
				break;
			}
			else
			{
				q.push({ x.num -1,x.bac + 1 });
			}

		}
	}
}