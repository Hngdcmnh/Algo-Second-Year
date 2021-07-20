#include <iostream>
#include <string>

using namespace std;
int b[1000];
int a[1000];

bool check(int k)
{
    for(int i=2;i<=k;i++)
    {
        if(a[b[i]]<=a[b[i-1]]) return false;
    }
    return true;

}
int main()
{
    int n,k;
    cin>>n>>k;
    
    
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }

    for(int i =1;i<=k;i++)
    {
        b[i]=i;
    }

    int dem=0;
    if(check(k))
    {
        dem++;
    }
    while(true)
    {
        // cout<<"l";
        int i=k;
        while(i>=1 && b[i]==n-k+i) i--;
        if(i==0)
        {
            break;
        }
        else
        {
            b[i]=b[i]+1;
            for(int j=i+1;j<=k;j++)
            {
                b[j]= b[j-1]+1;
            }
            if(check(k))
            {
                dem++;
            }
        }
    }
    cout<<dem<<endl;

}