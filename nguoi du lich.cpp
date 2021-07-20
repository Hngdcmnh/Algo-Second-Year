#include<iostream>
using namespace std;
int n;
int a[20][20];
int maxx=100000;
int b[16]={0};
bool check()
{
    for(int i=2;i<=n;i++)
    {
        if(b[i]==0) return false;
    }
    return true;
}
void Try(int j,int sum)
{
    if(sum>maxx)
    {
        return;
    }
    if(check()&&maxx>sum+a[j][1])
    {
        maxx=sum+a[j][1];
        return;
    }
    for(int i=2;i<=n;i++)
    {
        if(b[i]!=1)
        {
            b[i]=1;
            Try(i,sum+a[i][j]);
            b[i]=0;
        }
    }
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>a[i][j];
        }
    }
    Try(1,0);
    cout<<maxx;
}