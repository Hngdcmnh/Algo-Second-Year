#include <iostream>
using namespace std;
bool check(int s[],int n,int k)
{
    int dem=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='A') dem++;
    }
    if(dem==k) return true;
    else return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin >> n>>k;
        int s[1000];
        for (int i = 0; i < n; i++) s[i]=0;
        if(check(s,n,k))
        {
            for (int i = 0; i < n; i++)
            {
                if (s[i] == 0) cout << "A";
                else cout << "B";
            }
            cout<<endl;
        }
        while (true)
        {
            int i = n - 1;
            while (i >= 0 && s[i] == 1)
            {
                i--;
            }
            if (i < 0)
            {
                break;
            }
            else
            {
                s[i] = 1;
                for (int k = i + 1; k < n; k++)
                {
                    s[k] = 0;
                }
            }
            if(check(s,n,k))
            {
                for (int i = 0; i < n; i++)
                {
                    if (s[i] == 0) cout << "A";
                    else cout << "B";
                }
            }
            
        }
        cout << endl;
    }


}