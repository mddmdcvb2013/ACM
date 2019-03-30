#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void main()
{
	int n, m;
	while (scanf("%d%d", &n, &m) != EOF)
	{
		int ans = 1000;
		printf("1");
		for (int i = 1; i < n; i++)
		{
			printf(" %d", ans);
			ans += 1000;
		}
		printf("\n");

		ans = 3;
		printf("2");
		for (int i = 1; i < m; i++)
		{
			printf(" %d", ans);
			ans++;
		}
		printf("\n");
	}
}