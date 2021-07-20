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
        string s1, s2;
        cin >> s1 >> s2;
        s1 = "0" + s1;
        s2 = "0" + s2;
        
        int maxx = 0;
        for (int i = 1; i < s1.size(); i++)
        {
            for (int j = 1; j < s2.size(); j++)
            {
                if (s1[i] == s2[j]) a[i][j] = a[i - 1][j - 1] + 1;
                else a[i][j] = max(a[i - 1][j], a[i][j - 1]);
                if (a[i][j] > maxx) maxx = a[i][j];
                //cout << a[i][j] << " ";
            }
            //cout << endl;
        }
        cout << maxx << endl;
    }
}