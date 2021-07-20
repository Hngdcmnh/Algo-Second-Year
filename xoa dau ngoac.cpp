#include <iostream>
#include <stack>
#include <queue>
#include <algorithm>
#include <cmath>
#include <map>
#include <vector>
using namespace std;

struct kitu
{
	char cha;
	int num;
};

vector <string> res;
vector <kitu> vec;
void solve(string s1)
{
	/*for (int i = 0; i < s1.size(); i++)
	{
		cout << s1[i];
	}
	cout << endl;*/
	string s = "";
	for (int i = 0; i < vec.size(); i++)
	{
		if ((vec[i].cha == ')' || vec[i].cha == '(') && s1[vec[i].num-1] == '1')
		{
			
		}
		else s += vec[i].cha;
	}
	res.push_back(s);
}

int main()
{
	int t=1;
	/*cin >> t;
	cin.ignore();*/
	while (t--)
	{
		string s;
		cin >> s;
		
		stack <int> st;
		int dem = 0;
		for (int i = 0; i < s.size(); i++) 
		{
			kitu a;
			if (s[i] == '(')
			{
				dem++;
				st.push(dem);
				a.cha = '(';
				a.num = dem;
			}
			else if (s[i] == ')')
			{
				a.cha = ')';
				a.num = st.top();
				st.pop();
				
			}
			else
			{
				a.cha = s[i];
				a.num = 0;//(1+(2*(3+4)))
			}
			vec.push_back(a);
		}

		string s1 = "";
		for (int i = 1; i <= dem; i++)
		{
			s1 += "0";
		}

		while (true)
		{
			int i = s1.size()-1;
			while (i >= 0 && s1[i] == '1')
			{
				i--;
			}
			if (i < 0) break;
			else
			{
				s1[i] = '1';
				for (int j = i + 1; j < s1.size(); j++)
				{
					s1[j] = '0';
				}
			}
			
			solve(s1);

		}

		sort(res.begin(), res.end());
		for (int i = 0; i < res.size(); i++)
		{
			if (i >= 1 && res[i] == res[i - 1])
			{

			}
			else
			{
				cout << res[i] << endl;
			}
		}

	}
}