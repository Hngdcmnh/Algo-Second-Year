#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <sstream>
#include <algorithm>
#include <queue>
using namespace std;
bool check(int s[], int n, int k)
{
    for (int i = 0; i < n; i++) {
        int dem = 0;
        while (s[i] == 0 && i < n ) {
            dem++;
            i++;
        }
        if (dem == k) return true;
    }
    return false;
    
}

int main()
{
    /*int t;
    cin >> t;
    while (t--)
    {*/
        int n, k;
        cin >> n >> k;
        int s[100000];
        for (int i = 0; i < n; i++) s[i] = 0;
        if (check(s, n, k))
        {
            for (int i = 0; i < n; i++)
            {
                if (s[i] == 0) cout << "A";
                else cout << "B";
            }
            cout << endl;
        }
        int dem = 0;
        vector <string> vec[10000];
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
            if (check(s, n, k))
            {
                
                for (int i = 0; i < n; i++)
                {
                    if (s[i] == 0) vec[dem].push_back("A");
                    else vec[dem].push_back("B");
                }
                dem++;
                
            }

        }

        cout << dem << endl;
        for (int i = 0; i < dem; i++)
        {
            for (int j = 0; j < vec[i].size(); j++)
            {
                cout << vec[i][j];
            }
            cout << endl;
        }
}


