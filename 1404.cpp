#include <iostream>
#include <math.h>
#include <string>

int i, u, minus, v[128], value;
char st[128];

void main()
{
	scanf("%s", st);
	u = strlen(st);
	for (i = 0;i < u;i++)
	{
		v[i] = (int)(st[i]) - 'a';
	}
	for (i = 0;i<u;i++)
	{
		if (i == 0)
		{
			v[i] += 26;
		}
		else
		{
			while (v[i - 1] > v[i])
			{
				v[i] += 26;
			}
		}
	}
	minus = 5;
	for (i = 0;i<u;i++)
	{
		value = (v[i] - minus) % 26 + 'a';
		printf("%c", value);
		minus = v[i];
	}
}