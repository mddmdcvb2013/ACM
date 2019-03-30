#include <iostream> 
using namespace std;

int n, s;
int f[10010] = { 0 };

void main()
{
	cin >> n >> s;
	int ans = 0;
	f[s] = 1;
	for (int i = s;i < n; ++i)
	{
		if (!f[i])
		{
			continue;
		}
		for (int k = 1;k <= 100; ++k)
		{
			if (i * k % 100 == 0)
			{
				int j = i + i * k / 100;
				if (j > n)
				{
					break;
				}
				if (f[j] < f[i] + 1)
				{
					f[j] = f[i] + 1;
				}
			}
			if (f[i] > ans)
			{
				ans = f[i];
			}
		}
	}
	if (f[n] > ans)
	{
		ans = f[n];
	}
	cout << ans << endl;
}