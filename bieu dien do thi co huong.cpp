#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		vector <int> vec[1000];
		int n,m;
		cin>>n>>m;
		while(m--) 
		{
			int a,b;
			cin>>a>>b;
			vec[a].push_back(b);
		}
		for(int i=1;i<=n;i++)
		{
			cout<<i<<": ";
			for(int j=0;j<vec[i].size();j++)
			{
				cout<<vec[i][j]<<" ";
			}
			cout<<endl;
		}
	}
}