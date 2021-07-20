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
        string s1 = "";
        s1 += s[0];
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i - 1] == s[i]) s1.push_back('0');
            else s1.push_back('1');
        }
        cout << s1 << endl;
    }

}