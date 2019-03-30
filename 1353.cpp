#include <iostream>
using namespace std;

int dp[100][11];

void main() 
{
	int s;
	memset(dp, 0, sizeof(dp));
	dp[0][0] = 1;
	for (int j = 1;j <= 9;j++)
	{
		for (int k = 0;k <= 9;k++)
		{
			for (int i = k;i <= 81;i++)
			{
				dp[i][j] += dp[i - k][j - 1];
			}
		}		
	}
	dp[1][9]++;
	while (~scanf("%d", &s)) 
	{
		printf("%d\n", dp[s][9]);
	}
}