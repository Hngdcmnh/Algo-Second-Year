#include <iostream>
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
        for (int i = 1; i <= k; i++)
        {
            a[i] = i;
            cout << a[i];
        }
        cout << " ";
        while (true)
        {
            int i = k;
            while (i > 0 && a[i] == n - k + i)
            {
                i--;
            }

            if (i == 0)
            {
                break;
            }
            else
            {
                a[i] += 1;
                for (int j = i + 1; j <= k; j++)
                {
                    a[j] = a[j - 1] + 1;
                }

                for (int h = 1; h <= k; h++)
                {
                    cout << a[h] ;
                }
                cout << " ";
            }
        }
        cout << endl;
    }

}