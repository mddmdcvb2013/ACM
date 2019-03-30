#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void main()
{
	char s[220];
	while (~scanf("%s", s))
	{
		int len = strlen(s);
		int ans = 12;
		for (int i = 0; i < len - 5; i++)
		{
			int x = 0;
			if (s[i] != 'S')
			{
				if (s[i] == 's')
				{
					x++;
				}
				else if (isupper(s[i]))
				{
					x++;
				}
				else
				{
					x += 2;
				}
			}
			if (s[i + 1] != 'a')
			{
				if (s[i + 1] == 'A')
				{
					x++;
				}
				else if (islower(s[i + 1]))
				{
					x++;
				}
				else
				{
					x += 2;
				}
			}
			if (s[i + 2] != 'n')
			{
				if (s[i + 2] == 'N')
				{
					x++;
				}
				else if (islower(s[i + 2]))
				{
					x++;
				}
				else
				{
					x += 2;
				}
			}
			if (s[i + 3] != 'd')
			{
				if (s[i + 3] == 'D')
				{
					x++;
				}
				else if (islower(s[i + 3]))
				{
					x++;
				}
				else
				{
					x += 2;
				}
			}
			if (s[i + 4] != 'r')
			{
				if (s[i + 4] == 'R')
				{
					x++;
				}
				else if (islower(s[i + 4]))
				{
					x++;
				}
				else
				{
					x += 2;
				}
			}
			if (s[i + 5] != 'o')
			{
				if (s[i + 5] == 'O')
				{
					x++;
				}
				else if (islower(s[i + 5]))
				{
					x++;
				}
				else
				{
					x += 2;
				}
			}
			ans = min(ans, x);
		}
		printf("%d\n", ans * 5);
	}
}