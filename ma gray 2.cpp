#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <sstream>
#include <algorithm>
#include <queue>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        for (int i = 0; i < s.size() - 1; i++)
        {
            if (s[i] == s[i + 1]) s[i+1] = '0';
            else s[i+1] = '1';
        }
        cout << s << endl;
    }
}