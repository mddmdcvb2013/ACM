#include <iostream>
#include <map>
using namespace std;

const int maxn = 1010;

void main()
{
	int n, m;
	scanf("%d", &n);
	int ans = 0;
	for (int i = 1;i <= n;++i)
	{
		ans += i;
	}
	if (ans % 2 == 0)
	{
		printf("black");
	}
	else
	{
		printf("grimy");
	}
}