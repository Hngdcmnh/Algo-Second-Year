#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <sstream>
#include <algorithm>
#include <queue>
int a[1001][1001] = { 0 };
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[1000];
        int dd[100000] = { 0 };
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            for (int j = k; j >= a[i]; j--)
            {
                if (dd[j - a[i]] == 1) dd[j] = 1;
            }
            dd[a[i]] = 1;
        }
        //for (int j = 0; j <= k; j++) cout << dd[j] << " ";
        cout << endl;
        if (dd[k] == 1)cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    

    
    
}