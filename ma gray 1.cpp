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
        int n; cin >> n;
        vector <string > vec;
        vec.push_back("0");
        vec.push_back("1");
        /*for (int i = 0; i < vec.size(); i++)
        {
            cout << vec[i] << " ";
        }
        cout << endl;*/
        n--;
        while (n--)
        {
            vector <string> vec2;
            for (int i = 0; i < vec.size(); i++)
            {
                vec2.push_back(vec[i]);
            }
            /*for (int i = 0; i < vec2.size(); i++)
            {
                cout << vec2[i] << " ";
            }
            cout << endl;*/
            vec.clear();
            for (int i = 0; i < vec2.size(); i++)
            {
                vec.push_back("0" + vec2[i]);
            }
            
            for (int i = vec2.size()-1; i >=0; i--)
            {
                vec.push_back("1" + vec2[i]);
                /*cout << "j";*/
            }
            /*cout << "k";*/
            /*for (int i = 0; i < vec.size(); i++)
            {
                cout << vec[i] << " ";
            }
            cout << endl;*/
        }
        for (int i = 0; i < vec.size(); i++)
        {
            cout << vec[i] << " ";
        }
        cout << endl;
    }
}