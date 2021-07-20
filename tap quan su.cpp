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
        int dd[1000] = { 0 };
        for (int i = 1; i <= k; i++)
        {
            cin >> a[i];
            dd[a[i]]++;
        }
        int dem = 0;
        int i = k;
        while (i > 0 && a[i] == n - k + i)
        {
            i--;
        }
        if (i == 0)
        {
            cout << k << endl;
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
                if (dd[a[h]] != 0)
                {
                    dem++;
                }
            }
            cout << k-dem << endl;
        }
    }
}
