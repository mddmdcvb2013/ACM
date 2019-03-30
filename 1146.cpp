#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

const int MAXN = 110;

int mat[MAXN][MAXN], n;
int sum[MAXN][MAXN];

void calsum() 
{
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= n; ++j)
		{
			sum[i][j] = sum[i - 1][j] + mat[i][j];
		}	
	}	
}

int solve() 
{
	int ans = -999;
	for (int r1 = 1; r1 <= n; ++r1) 
	{
		for (int r2 = r1; r2 <= n; ++r2) 
		{
			int t = 0;
			for (int j = 1; j <= n; ++j) 
			{
				t += sum[r2][j] - sum[r1 - 1][j];
				ans = max(t, ans);
				if (t < 0)
				{
					t = 0;
				}
			}
		}
	}
	return ans;
}

void main() 
{
	scanf("%d", &n);
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= n; ++j)
		{
			scanf("%d", &mat[i][j]);
		}	
	}	
	calsum();
	printf("%d\n", solve());
}