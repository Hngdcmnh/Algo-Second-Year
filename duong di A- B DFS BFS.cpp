#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,h;
    cin>>n>>k>>h;
    int a[100][100]={{0}};
    int bb[100]={0};
    int b[100]={0};
    int dd[100]={0};
    int d[100]={0};
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>a[i][j];
        }
    }
    stack <int> st;
    st.push(k);
    d[k]=1;
    while(!st.empty())
    {
        int x = st.top();
        st.pop();
        for(int i=1;i<=n;i++)
        {
            if(a[x][i]==1 && d[i]==0)
            {
                dd[i]=x;
                d[i]=1;
                st.push(x);
                st.push(i);
                break;
            }
        }
    }
    
   
    queue <int> q;
    q.push(k);
    b[k]=1;
    while(!q.empty())
    {
        int x = q.front();
        q.pop();
        
        for(int i=1;i<=n;i++)
        {
            if(a[x][i]==1 && b[i]==0)
            {
                bb[i]=x;
                b[i]=1;
                q.push(i);
            }
        }
    }
    
    
    
    
    if(bb[h]==0)
    {
        cout<<"no path";
    }
    else
    {
        int m=h;
        cout<<"DFS path: ";
        while(dd[m]!=0)
        {
            cout<<m<<" ";
            m=dd[m];
        }
        cout<<m;
        cout<<endl;
        
        cout<<"BFS path: ";
        while(bb[h]!=0)
        {
            cout<<h<<" ";
            h=bb[h];
        }
        cout<<h;
        cout<<endl;
    }
    
    
    
}