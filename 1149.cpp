#include <iostream>
#include <stdio.h>
using namespace std;

void main()
{
	int n, i, j;
	cin >> n;
	for (i = 1;i < n;i++)
	{
		printf("(");
	}
	for (i = 1;i <= n;i++)
	{
		for (j = 1;j <= i;j++)
		{
			if (j > 1)
			{
				printf((j & 1) ? "+" : "-");
			}	
			printf("sin(%d", j);
		}
		for (j = 1;j <= i;j++)
		{
			printf(")");
		}
		printf("+%d", n + 1 - i);
		if (i != n)
		{
			printf(")");
		}
	}
}