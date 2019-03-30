#include <iostream>
#include <map>
#include <set>
#include <string>
#include <algorithm>
using namespace std;

const int maxn = 105;
int a[maxn], n, ans;
set<int> se;
map<string, bool> ma;

int main()
{
	cin >> n;
	for (int i = 0;i<n;i++)
	{
		cin >> a[i];
		se.insert(a[i]);
	}
	if (n >= 6)
	{
		if (se.size() >= 2)
		{
			cout << "Yes" << endl;
			return 0;
		}
		else
		{
			cout << "No" << endl;
			return 0;
		}
	}
	sort(a, a + n);
	do
	{
		string s = "";
		for (int i = 0;i<n;i++)
		{
			s = s + char(a[i] + '0');
		}
		if (!ma[s])
		{
			ans++;
			ma[s] = 1;
		}
	} while (next_permutation(a, a + n));
	if (ans >= 6)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}
	return 0;
}