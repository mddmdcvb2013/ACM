#include <iostream>
using namespace std;

int tv, tc, st, ed;

void main()
{
	while (scanf("%d%d%d%d", &tv, &tc, &st, &ed) != EOF)
	{
		if (st == ed)
		{
			printf("%d\n", tv);
		}
		else if (st < ed)
		{
			printf("%d\n", (ed - st) * 2 * tc + (ed - st - 1)*tv);
		}
		else
		{
			printf("%d\n", (st - ed + 1)*tv + (st - ed) * 2 * tc);
		}
	}
}