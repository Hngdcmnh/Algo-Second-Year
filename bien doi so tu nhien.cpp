#include <iostream>
#include <string>
#include <queue>
#include <cmath>
#include <set>

using namespace std;

struct so
{
    int  num;
    int  bac;
};

int main()
{
     int t;
    cin>>t;
    while(t--)
    {
        set <int> s;
        int  n;
        cin>>n;
        queue <so> q;
        q.push({n,0});
        s.insert(n);
        while(!q.empty())
        {
            so x = q.front();
            q.pop();
            if( x.num == 1) 
            {
                cout<<x.bac<<endl;
                break;
            }
            if(x.num-1==1)
            {
                cout<<x.bac+1<<endl;
                break;
            }
            
            
            if(s.count(x.num-1)==0)
            {
                q.push({x.num-1,x.bac+1});
                s.insert(x.num-1);
            }

            if(( int)sqrt(x.num)*(int )sqrt(x.num)==x.num && s.count(( int) sqrt(x.num))==0)
            {
                q.push({(int )sqrt(x.num),x.bac+1});
                s.insert(( int)sqrt(x.num));
            }
            else
            {
                 int i=2;
                for(;i*i<=x.num;i++)
                {
                    if(x.num%i==0 && s.count(x.num/i)==0)
                    {
                        q.push({x.num/i,x.bac+1});
                        s.insert(x.num/i);
                    }
                }
            }
            
        }
    }
}
