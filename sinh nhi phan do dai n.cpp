#include <iostream>
#include <queue>
#include <vector>
#include <string>

using namespace std;
int a[1000]={0};
int n;

void out()
{
	for(int i=1;i<=n;i++)
	{
		cout<<a[i];
	}
	cout<<endl;
}

void sinh(int j)
{
	if(j>n) 
	{
		out();
		return;
	}
	for(int i=0;i<=1;i++)
	{
		a[j]=i;
		sinh(j+1);
	}
}


int main()
{
	cin>>n;
	sinh(1);
}