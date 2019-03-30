#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int a[200000], b[200000];

void main()
{
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", a + i);
	}
	int top = 0, top1 = 1;
	for (int i = 1; i <= n; i++)
	{
		b[++top] = i;
		while (top&&b[top] == a[top1]) 
		{
			top--;top1++;
		}
	}
	if (top)
	{
		printf("Cheater\n");
	}
	else
	{
		printf("Not a proof\n");
	}
}