#include <iostream>
#include <vector>
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
        vector < vector<int> > vt(n+1,vector <int> (n+1,0));
        for (int i = 0; i < n; i++)
        {
            cin >> vt[0][i];
        }
        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < n - i; j++)
            {
                vt[i][j] = vt[i-1][j] + vt[i-1][j + 1];
            }
        }
        for (int i = vt.size()-2; i >= 0; i--)
        {
            cout << "[";
            for (int j = 0; j < n-i-1; j++)
            {
                cout << vt[i][j]<<" ";
            }
            cout << vt[i][n - i - 1];
            cout << "]" << " ";
        }
        cout << endl;
    }
    

}