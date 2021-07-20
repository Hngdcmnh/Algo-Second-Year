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
        int n;
        cin >> n;
        int a[1000];
        int b[1000];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b, b + n);
        int start, finish;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                start = i + 1;
                break;
            }
            
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] != b[i])
            {
                finish = i + 1;
                break;
            }
        }

        cout << start << " " << finish << endl;
    }
    
    
}