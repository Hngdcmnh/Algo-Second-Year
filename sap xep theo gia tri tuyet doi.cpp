#include <iostream>
#include <stack>
#include <queue>
#include <algorithm>
#include <cmath>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

struct chenh
{
	long gt;
	long lech;
	long vt;
};
bool cmp(chenh a, chenh b)
{
	if(a.lech!=b.lech) return a.lech < b.lech;
	else return a.vt<b.vt;
}
int main()
{
	long t;
	cin >> t;
	while (t--)
	{
		vector <chenh> a;
		long n, k;
		cin >> n >> k;
		for(int i=0;i<n;i++)
		{
			long x;
			cin >> x;
			chenh b;
			b.gt = x;
			b.vt=i;
			b.lech = abs(x - k);
			a.push_back(b);
		}
		sort(a.begin(), a.end(), cmp);
		for (long i = 0; i < a.size(); i++)
		{
			cout << a[i].gt<<" ";
		}
		cout << endl;
	}
	
}