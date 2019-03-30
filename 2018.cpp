#include<iostream>
using namespace std;

const int maxn = 5e4 + 5;
const int mod = 1e9 + 7;
int n, a[2];
int dp[maxn][2];

void main() 
{
	cin >> n >> a[0] >> a[1];
	dp[0][0] = dp[0][1] = 1;

	for (int i = 1;i <= n;i++) 
	{
		for (int j = 1;j <= a[0] && j <= i;j++)
		{
			dp[i][0] = (dp[i][0] + dp[i - j][1]) % mod;
		}	
		for (int j = 1;j <= a[1] && j <= i;j++)
		{
			dp[i][1] = (dp[i][1] + dp[i - j][0]) % mod;
		}		
	}
	cout << (dp[n][0] + dp[n][1]) % mod << endl;
}