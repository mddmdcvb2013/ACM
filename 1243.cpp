#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void main()
{
	int n = 7;
	char s[10009];
	int a[10009];
	cin >> s;
	memset(a, 0, sizeof a);
	int len = strlen(s);
	for (int i = 0;i < len;i++)
	{
		a[i] = s[i] - '0';
	}
	int x = 0;
	for (int i = 0;i < len;i++)
	{
		x = (x * 10 + a[i]) % n;
	}
	cout << x << endl;
}
