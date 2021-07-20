#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
            int i = s.size() - 1;
            while (i >= 0 && s[i] == '1')
            {
                i--;
            }
            if (i < 0)
            {
                for (int k = 0; k < s.size(); k++)
                {
                    cout << "0";
                }
                cout << endl;
                continue;
            }
            else
            {
                s[i] = '1';
                for (int k = i + 1; k < s.size(); k++)
                {
                    s[k] = '0';
                }
            }
            cout << s << endl;
        }


}