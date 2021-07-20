#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <string>
#include <sstream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        vector <string> vec;
        string s1 = "";
        for (int i = 0; i <= s.size(); i++)
        {
            if (s[i] == ' ' || i == s.size())
            {
                vec.push_back(s1);
                s1.clear();
            }
            else
            {
                s1 += s[i];
            }
        }

        for (int i = vec.size() - 1; i >= 0; i--)
        {
            cout << vec[i] << " ";
        }
        cout << endl;
    }
}