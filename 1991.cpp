#include <iostream>
using namespace std;

void main()
{
	int x, y, a;
	while (~scanf("%d%d", &x, &y))
	{
		int ans1 = 0, ans2 = 0;
		for (int i = 0;i < x;i++)
		{
			scanf("%d", &a);
			if (y > a)
			{
				ans1 += y - a;
			}
			else
			{
				ans2 += a - y;
			}
		}
		printf("%d %d\n", ans2, ans1);
	}
}