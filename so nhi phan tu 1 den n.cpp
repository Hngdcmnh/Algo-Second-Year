#include <bits/stdc++.h>
using namespace std;
long long a[32]={0};
void in(int n)
{
	int check=0;
	for(int i=31;i>=0;i--)
	{
		if(a[i]<=n) 
		{
			check=1;
			cout<<"1";
			n = n - a[i];
			if(n==0&&i==0) return;
		}
		else
		{
			if(check==1) cout<<"0";
		} 
	}
}
int main()
{
	int t;
	cin>>t;
	a[0]=1;
	for(int i=1;i<32;i++) a[i]= a[i-1]*2;
	while(t--)
	{
		int n;
		cin>>n;
		
		
		for(int i=1;i<=n;i++)
		{
			in(i);
			cout<<" ";
		}
		
		cout<<endl;
	}
}