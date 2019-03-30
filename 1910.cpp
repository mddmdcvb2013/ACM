#include <iostream>
using namespace std;

void main()
{
	int max = 0, a[1001], n, num = 0, sum = 0;
	memset(a, -1, sizeof(a));
	scanf("%d", &n);
	for (int i = 1;i <= n;i++)
	{
		scanf("%d", &a[i]);
	}
	for (int i = 1;i <= n - 2;i++)
	{
		sum = a[i] + a[i + 1] + a[i + 2];
		if (sum>max)
		{
			max = sum;
			num = i + 1;
		}
	}
	printf("%d %d", max, num);
}