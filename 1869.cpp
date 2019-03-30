#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

void main()
{
	int a[101][101];
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= n; ++j)
		{
			scanf("%d", &a[i][j]);
		}
	}
		
	int max = 0, sum = 0;
	for (int i = 1; i <= n; ++i)
	{
		for (int t = 1; t < i; ++t)
		{
			sum -= a[t][i];
		}
		for (int j = i + 1; j <= n; ++j)
		{
			sum += a[i][j];
			if (sum > max)
			{
				max = sum;
			}
		}
	}
	sum = 0;
	for (int i = n; i >= 1; --i)
	{
		for (int t = n; t > i; --t)
		{
			sum -= a[t][i];
		}
		for (int j = i - 1; j >= 1; --j)
		{
			sum += a[i][j];
			if (sum > max)
			{
				max = sum;
			}
		}
	}
	printf("%d\n", max % 36 == 0 ? max / 36 : max / 36 + 1);
}