#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

#define MAXN 10000000
int dp[MAXN];
int a[MAXN];

void main()
{
	int n;
	while (cin >> n)
	{
		int ans = 0;
		for (int i = 0;i<n;i++)
		{
			cin >> a[i];
			ans += a[i];
		}
		int sum = ans / 2;
		memset(dp, 0, sizeof(dp));
		for (int i = 0;i<n;i++)
		{
			for (int j = sum;j >= a[i];j--)
			{
				dp[j] = max(dp[j], dp[j - a[i]] + a[i]);
			}
		}
		cout << ans - dp[sum] * 2 << endl;
	}
}