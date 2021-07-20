#include <iostream>
#include <stack>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin >> n;
		int a[1000];
		int b[1000]={0};
		int dem=0;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		int maxx=0;
		for(int i = 0;i<n;i++)
		{
			b[i]=1;
			for(int j=i-1;j>=0;j--)
			{
				if(a[i]>=a[j] && b[i] < b[j]+1)
				{
					b[i]=b[j]+1;
					if(maxx<b[i]) maxx=b[i];
				} 
			}
		}
		
		cout<<n-maxx<<endl;
	}
	
}