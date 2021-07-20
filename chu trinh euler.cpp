#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[100][100];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>a[i][j];
        }
    }
    
    stack <int> st1;
    stack <int> st2;
    st1.push(k);
    while(!st1.empty())
    {
        int check=0;
        int x = st1.top();
        for(int i=1;i<=n;i++)
        {
            if(a[x][i]==1) 
            {
                check=1;
                st1.push(i);
                a[x][i]=0;
                a[i][x]=0;
                break;
            }
        }
        if(check==0)
        {
            st2.push(st1.top());
            st1.pop();
        }
    }
    
    while(!st2.empty())
    {
        cout<<st2.top()<<" ";
        st2.pop();
    }
}