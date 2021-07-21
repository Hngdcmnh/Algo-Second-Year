#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <string>
#include <sstream>
using namespace std;


int search(int in[], int x, int fi)
{
	for (int i = 0; i < fi; i++)
	{
		if (in[i] == x)
		{
			return i;
		}
	}

	return -1;
}

void find(int in[], int pre[], int n)
{																																		
	int root = search(in,pre[0], n);
	//cout <<in[root]<<"  "<< root << "  " << n << endl;							//4  2  5  1  3  6
	if (root != 0)																//1  2  4  5  3  6
	{

		find(in, pre + 1, root);
	}

	if (root != n - 1)
	{
		find(in + root + 1, pre + root + 1, n - root - 1);
	}

	cout << pre[0] <<" ";
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int in[10000];
		int pre[10000];
		int n;
		cin >> n;
		for (int i = 0; i < n; i++)	cin >> in[i];
		for (int i = 0; i < n; i++) cin >> pre[i];

		

		find(in, pre, n);
		cout << endl;
	}
}