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
    int n;
    cin >> n;
    int a[1001];
    int b[1001] = { 0 };
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = 1;
    }
    int maxx = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j >= 0; j--)
        {
            if (a[j] < a[i] && b[i] < b[j] + 1)
            {
                b[i] = b[j] + 1;
            }
            
        }
        if (b[i] > maxx)maxx = b[i];
    }
    /*for (int i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;*/
    cout << maxx << endl;
}