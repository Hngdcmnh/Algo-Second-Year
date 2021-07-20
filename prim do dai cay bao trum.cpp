#include<bits/stdc++.h>
using namespace std;
struct canh
{
    int i, j, val;
};

bool cmp(canh a,canh b)
{
    if(a.val!=b.val) return a.val<b.val;
    if(a.i!=b.i) return a.i<b.i;
    if(a.j!=b.j) return a.j<b.j;
}

int main()
{
    int n,k;
    cin>>n>>k;
    int a[100][100];
    vector <canh> vec;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>a[i][j];
            if(i<j && a[i][j]>0)
            {
                canh x ;
                x.i = i;
                x.j = j;
                x.val = a[i][j];
                vec.push_back(x);
            }
            
        }
    }
    
    int xet[1000]={0};
    xet[k]=1;
    
    sort(vec.begin(),vec.end(),cmp);
    vector <canh> res;
    int check=1;
    int sum=0;
    while(check)
    {
        check=0;
        for(int i=0;i<vec.size();i++)
        {
            if((xet[vec[i].i]==1 && xet[vec[i].j]==0)||(xet[vec[i].i]==0 && xet[vec[i].j]==1)||(xet[vec[i].i]==0 && xet[vec[i].j]==0))
            {
                sum+=vec[i].val;
                check=1;
                res.push_back(vec[i]);
                xet[vec[i].i]=1;
                xet[vec[i].j]=1;
            }
            
        }
    }
    
    cout<<"dH = "<<sum<<endl;
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i].i<<"   "<<res[i].j<<endl;
    }
    
    
}

