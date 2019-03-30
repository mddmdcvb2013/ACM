#include <iostream>
using namespace std;

void main() 
{
	unsigned long long a, b, k, ans1, ans2;
	while (~scanf("%I64d%I64d%I64d", &a, &b, &k))
	{
		if (a + b < k)
		{
			puts("Impossible");
		}
		else 
		{
			if (a >= k) 
			{
				ans1 = k;
				ans2 = 0;
			}
			else 
			{
				if (b >= k) 
				{
					ans1 = 0;
					ans2 = k;
				}
				else 
				{
					ans1 = a;
					ans2 = k - a;
				}
			}
			printf("%I64d %I64d\n", ans1, ans2);
		}
	}
}