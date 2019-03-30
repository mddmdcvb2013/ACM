#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

string Manacher(string s)
{
	string t = "$#";
	for (unsigned long long i = 0; i < s.size(); ++i)
	{
		t += s[i];
		t += "#";
	}
	vector<unsigned long long> p(t.size(), 0);
	unsigned long long mx = 0, id = 0, resLen = 0, resCenter = 0;
	for (unsigned long long i = 1; i < t.size(); ++i)
	{
		p[i] = mx > i ? min(p[2 * id - i], mx - i) : 1;
		while (t[i + p[i]] == t[i - p[i]]) ++p[i];
		if (mx < i + p[i])
		{
			mx = i + p[i];
			id = i;
		}
		if (resLen < p[i])
		{
			resLen = p[i];
			resCenter = i;
		}
	}
	return s.substr((resCenter - resLen) / 2, resLen - 1);
}

void main()
{
	string s;
	cin >> s;
	cout << Manacher(s) << endl;
}