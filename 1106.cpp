#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int>ed[110];
int vis[110], num;

void dfs(int u, int c)
{
	int i;
	vis[u] = c;
	if (c == 1)
	{
		num++;
	}
	for (i = 0; i < (int)ed[u].size(); i++)
	{
		int v = ed[u][i];
		if (!vis[v])
		{
			dfs(v, -c);
		}	
	}
}

void main()
{
	int i, a, n;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		while (scanf("%d", &a) && a)
		{
			ed[i].push_back(a);
		}
	}
	for (i = 1; i <= n; i++)
	{
		if (!vis[i])
		{
			dfs(i, 1);
		}	
	}
	printf("%d\n", num);
	int k = 0;
	for (i = 1; i <= n; i++)
	{
		if (vis[i] == 1)
		{
			if (k)
			{
				printf(" ");
			}
			printf("%d", i);
			k++;
		}
	}
	puts("");
}