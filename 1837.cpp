#include <iostream>
#include <map>
#include <set>
#include <string>
using namespace std;

map<string, set<string> > a;
map<string, int> f;
set<string> name;
set<string> p;
string t[1000];
set<string>::iterator iters;
int n, m = 0;

void main()
{
	cin >> n;
	string  s1, s2, s3;
	for (int i = 1; i <= n; i++) 
	{
		cin >> s1 >> s2 >> s3;
		name.insert(s1);
		name.insert(s2);
		name.insert(s3);
		a[s1].insert(s2);
		a[s1].insert(s3);
		a[s2].insert(s1);
		a[s2].insert(s3);
		a[s3].insert(s1);
		a[s3].insert(s2);
		f[s1] = -1;
		f[s2] = -1;
		f[s3] = -1;
	}
	f["Isenbaev"] = 0;
	t[1] = "Isenbaev";
	p.insert("Isenbaev");
	int i = 0, j = 1;
	while (i < j)
	{
		i++;
		for (iters = a[t[i]].begin(); iters != a[t[i]].end(); iters++)
		{
			if (p.find(*iters) == p.end())
			{
				f[*iters] = f[t[i]] + 1;
				p.insert(*iters);
				t[++j] = *iters;
			}
		}
	}
	for (iters = name.begin(); iters != name.end(); iters++)
	{
		cout << *iters << " ";
		if (f[*iters] == -1)
		{
			cout << "undefined\n";
		}
		else
		{
			cout << f[*iters] << endl;
		}
	}
}