#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <sstream>
#include <algorithm>
#include <queue>
using  namespace std;
void duyet(int i, int n, int sum, vector <int>& vec, vector <vector <int> >& res)
{
	if (i <= 0) return;
	if (sum > n) return;
	if (sum == n)
	{
		res.push_back(vec);
		return;
	}
	if (sum + i <= n)
	{
		/*cout << sum << endl;*/
		vec.push_back(i);
		duyet(i, n, sum + i, vec, res);
		vec.pop_back();
	}
	if(sum<n) duyet(i-1, n, sum, vec,res);
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		vector <vector<int> > res;
		vector <int> vec;
		int n;
		cin >> n;
		duyet(n, n, 0,vec,res);

		for (int i =0; i < res.size(); i++)
		{
			cout << "(";
			for (int j = 0; j <res[i].size()-1; j++)
			{
				cout << res[i][j]<<" ";
			}
			cout << res[i][res[i].size()-1];
			cout << ") ";
		}
		cout << endl;
	}
}