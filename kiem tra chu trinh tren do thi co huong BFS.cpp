#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <sstream>
#include <algorithm>
#include <queue>
#include <iostream>
#include <queue>


using namespace std;

struct toado
{
    int x,y;

};

int n,m;
int a[1000][1000]={{0}};

void duyet(int i,int j)
{
    toado pos;
    pos.x=i;
    pos.y=j;

    queue <toado> q;
    q.push(pos);
    a[pos.x][pos.y]=0;
    while(!q.empty())
    {
        toado pos=q.front();
        q.pop();
        
        for(int i=-1;i<=1;i++)
        {
            for(int j=-1;j<=1;j++)
            {
                int b1 = pos.x+i;
                int b2 = pos.y+j; 
                if(b1>=0 && b2>=0 && b1<n && b2<m && a[b1][b2]==1)
                {

                    q.push({b1,b2});
                    a[b1][b2]=0;
                }
            }
        }
    }
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        int dem=0;

        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=m;j++)
            {
                if(a[i][j]==1)
                {
                    dem++;
                    duyet(i,j);
                }
            }
        }

        cout<<dem<<endl;
    }

    

}