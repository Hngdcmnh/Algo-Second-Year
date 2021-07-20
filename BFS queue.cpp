#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[100][100]={{0}};
    int b[100]={0};
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
            cin>>a[i][j];
        
    }
    
    queue <int> q;
    q.push(1);
    b[1]=1;
    while(!q.empty())
    {
        int x= q.front();
        b[x]=1;
        cout<<x<<" ";
        q.pop();
        for(int i=1;i<=n;i++)
        {
            if(a[x][i]==1&&b[i]==0)
            {
                b[i]=1;
                q.push(i);
            }
        }
        
    }
    
}