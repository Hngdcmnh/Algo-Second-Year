#include <iostream>
using namespace std;
void out(int a[], int i,int n)
{
    cout << "[";
    for (int j = 0; j < n - i-1; j++)
    {
        cout << a[j] << " ";
    }
    cout << a[n - i - 1];
    cout << "]"<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[1000];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            out(a, i, n);
            for (int j = 0; j < n - i; j++)
            {
                a[j] = a[j] + a[j + 1];
            }
        }
    }
    

}