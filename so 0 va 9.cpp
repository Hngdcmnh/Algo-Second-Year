#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		queue <int> q;
		q.push(9);
		while(true)
		{
			int x = q.front();
			q.pop();
			if(x%n==0)
			{
				cout<<x<<endl;
				break;
			}
			else 
			{
				int a= x*10;
				q.push(a);
				int b= x*10 +9;
				q.push(b);
			}
		}
	}
}