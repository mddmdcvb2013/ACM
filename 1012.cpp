#include <iostream>
#include <string>
using namespace std;

int a[1800];
int dp[1800][1801];

void main()
{
	int n, k;
	scanf("%d%d", &n, &k);
	memset(dp, 0, sizeof(dp));
	dp[1][1800] = k - 1;
	dp[2][1800] = k*(k - 1);
	for (int i = 3; i <= n; i++)
	{
		memset(a, 0, sizeof(a));

		for (int j = 1800; j >= 0; j--)
		{
			a[j] = dp[i - 1][j] + dp[i - 2][j];
		}
		for (int j = 1800; j >= 0; j--)
		{
			if (a[j] > 9)
			{
				a[j - 1] += a[j] / 10;
				a[j] = a[j] % 10;
			}
		}

		for (int j = 1800; j >= 0; j--)
		{
			dp[i][j] = a[j] * (k - 1);
		}
		for (int j = 1800; j >= 0; j--)
		{
			if (dp[i][j] > 9)
			{
				dp[i][j - 1] += dp[i][j] / 10;
				dp[i][j] %= 10;
			}
		}
	}
	int i = 0;
	while (dp[n][i] == 0)
	{
		i++;
	}
	for (; i <= 1800; i++)
	{
		printf("%d", dp[n][i]);
	}
	printf("\n");
}