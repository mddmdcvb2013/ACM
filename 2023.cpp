#include <iostream>
#include <string>
using namespace std;

int a[30];

void main() 
{
	for (int i = 0; i<26; i++) 
	{
		if (i == 'A' - 'A' || i == 'P' - 'A' || i == 'O' - 'A' || i == 'R' - 'A')
		{
			a[i] = 1;
		}
		else if (i == 'B' - 'A' || i == 'M' - 'A' || i == 'S' - 'A')
		{
			a[i] = 2;
		}
		else if (i == 'D' - 'A' || i == 'G' - 'A' || i == 'J' - 'A' || i == 'K' - 'A' || i == 'T' - 'A' || i == 'W' - 'A')
		{
			a[i] = 3;
		}
		else
		{
			a[i] = 0;
		}
	}
	int n;
	string s;
	while (scanf("%d", &n) == 1) 
	{
		int ans = 0, now = 1;
		for (int i = 0; i<n; i++) 
		{
			cin >> s;
			ans += a[s[0] - 'A'] > now ? a[s[0] - 'A'] - now : now - a[s[0] - 'A'];
			now = a[s[0] - 'A'];
		}
		printf("%d\n", ans);
	}
}