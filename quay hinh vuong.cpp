#include <iostream>
#include <queue>
#include <string>
#include <sstream>
#include <set>
using namespace std;

struct xau
{
    string str;
    int bac;

};

string duyet(string str)
{
    string s="";
    for(int i=0;i<str.size();i++)
    {
        if(str[i]!=' ') s+=str[i]; 
    }
    return s;
}

int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        set <string> s;
        string s11,s22,s1,s2;
        getline(cin,s11);
        getline(cin,s22);

        s1= duyet(s11);
        s2 = duyet(s22);
        
        // cout<<s1<<" "<<s2<<endl;

        queue <xau> q;
        q.push({s1,0});
        
        while(!q.empty())
        {
            xau x = q.front();
            // cout<<x.str<<endl;
            q.pop();
            if(x.str==s2)
            {
                cout<<x.bac<<endl;
                break;
            } 
            string x0 = x.str;
            string x1= x0;
            string x2= x0;
            x1[0]= x0[3];
            x1[1]= x0[0];
            x1[2]= x0[2];
            x1[3]= x0[4];
            x1[4]= x0[1];
            x1[5]= x0[5];
            if(s.count(x1)==0)
            {
                
                q.push({x1,x.bac + 1});
                s.insert(x1);
            }


            x2[0]= x0[0];
            x2[1]= x0[4];
            x2[2]= x0[1];
            x2[3]= x0[3];
            x2[4]= x0[5];
            x2[5]= x0[2];
            if(s.count(x2)==0)
            {
                q.push({x2,x.bac + 1});
                s.insert(x2);
            }
            // cout<<x1<<"--"<<x2<<endl;


        }

    }
}