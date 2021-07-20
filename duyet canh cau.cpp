#include<bits/stdc++.h>
#include<queue>
using namespace std;
long long demlt(long long s[14][14],long long n,long long dk[]){
    long long j,d,i,kq=0;
    for (j=0;j<n;j++)
    if (dk[j]==0) {
        queue <int>a;
        a.push(j);
        dk[j]=1;
        kq++;
        while(a.empty()==false){
            d=a.front();
            a.pop();
            for (i=0;i<n;i++)
            if (s[d][i]==1&dk[i]==0){
                a.push(i);
                dk[i]=1;
            }
        }
    }
    return kq;
}
int main(){
    long long i,ii,j,n,m,kq;
    cin>>n;
    long long s[14][14],dk[n]={0};
    for (i=0;i<n;i++)
    for (j=0;j<n;j++) cin>>s[i][j];
    m=demlt(s,n,dk);
    for (j=0;j<n;j++) dk[j]=0;
    for(i=0;i<n;i++)
    for (j=0;j<n;j++) 
    if (s[i][j]==1){
        s[i][j]=0;
        if (demlt(s,n,dk)>m) cout<<i+1<<" "<<j+1<<endl;
        for (ii=0;ii<n;ii++) dk[ii]=0;
        s[i][j]=1;
    }
    return 0;
}
    