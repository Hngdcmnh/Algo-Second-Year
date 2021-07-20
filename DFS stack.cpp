#include <bits/stdc++.h>
using namespace std;
int a[100][100];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>a[i][j];
        }
    }
    int dd[10000]={0};
    stack <int> s;
    s.push(1);
    dd[1]=1;
    cout<<"1 ";
    while(!s.empty())
    {
        int x= s.top();
        s.pop();
        dd[x]=1;
        for(int j=1;j<=n;j++)
        {
            if(a[x][j]==1&&dd[j]==0)
            {
                s.push(x);
                s.push(j);
                cout<<j<<" ";
                break;
            }
        }
    }
}