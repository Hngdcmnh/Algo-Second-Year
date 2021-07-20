#include <iostream>
#include <string>
#include <queue>
#include <algorithm>
using namespace std;
int main()
{
    long long t;cin>>t;
    cin.ignore();
    while(t--)
    {
        long long k;
        string s;
        cin>>k>>s;
        long long a[1000]={0};
        for(long long i=0;i<s.length();i++)
            a[s[i]-'A']++;
        priority_queue<long long> pq;
        for(long long i=0;i<=30;i++)
        {
            if(a[i]>0)
                pq.push(a[i]);
        }
        while(k--)
        {
            long long tmp=pq.top();pq.pop();
            tmp--;
            pq.push(tmp);
        }
        long long res=0;
        while(!pq.empty())
        {
            res+=pow(pq.top(),2);
            pq.pop();
        }
        cout<<res<<endl;
    }
}