#include <iostream>
#include <stack>
#include <queue>
#include <algorithm>
#include <cmath>
#include <sstream>
using namespace std;

struct so
{
	int num;
	int stt;
};

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		queue<so> q;
		int bac = 0;
		so k;
		k.num = n;
		k.stt = 0;
		q.push(k);
		while (true)
		{
				
			so x = q.front();
			if (x.num == 1)
			{
				cout << x.stt <<endl;
				break;
			}

			if (x.num % 2 == 0)
			{
				so x1;
				x1.num = x.num / 2;
				x1.stt = x.stt + 1;
				q.push(x1);
			}

			if (x.num % 3 == 0)
			{
				so x1;
				x1.num = x.num / 3;
				x1.stt = x.stt + 1;
				q.push(x1);
			}

			so x1;
			x1.num = x.num -1;
			x1.stt = x.stt + 1;
			q.push(x1);
			q.pop();
		}
	}
}


