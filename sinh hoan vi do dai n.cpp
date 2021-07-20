#include <iostream>
#include <queue>
#include <vector>
#include <string>

using namespace std;
int a[1000]={0};
int b[1000]={0};

void out(int n)
{
	for(int i=1;i<=n;i++)
	{
		cout<<a[i];
	}
	cout<<endl;
}

void sinh(int i,int n)
{
	if(i>n)
	{
		out(n);
		return ;
	}
	for(int j=1;j<=n;j++)
	{
		if(b[j]==0)
		{
			a[i]=j;
			b[j]=1;
			sinh(i+1,n);
			b[j]=0;
		}
	}
}


int main()
{
	int n;
	cin>>n;
	sinh(1,n);
}

