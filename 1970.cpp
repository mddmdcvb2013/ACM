#include <iostream>
#include <algorithm>
using namespace std;

struct node
{
	int a[4][4];
}p[9][4];

int flag = 0;
int ans[10][10];
int vis[10];
int xx[9] = { 0,0,0,3,3,3,6,6,6 };
int yy[9] = { 0,3,6,0,3,6,0,3,6 };
void dfs(int x)
{
	if (flag) 
	{ 
		return; 
	}
	if (x == 9) 
	{
		for (int i = 0;i<10;i++) 
		{
			for (int j = 0;j<10;j++) 
			{
				if (j == 0) 
				{ 
					printf("%d", ans[i][j]);
				}
				else 
				{ 
					printf(" %d", ans[i][j]);
				}
			}
			printf("\n");
		}
		flag = 1;
		return;
	}

	for (int i = 0;i<9;i++) 
	{
		if (vis[i]) 
		{ 
			continue;
		}
		for (int j = 0;j<4;j++)
		{
			int fff = 0;
			for (int t = 0;t<4;t++) 
			{
				for (int k = 0;k<4;k++) 
				{
					if (ans[xx[x] + t][yy[x] + k] == -1)
					{
						continue;
					}
					if (ans[xx[x] + t][yy[x] + k] != p[i][j].a[t][k]) 
					{
						fff = 1;
						break;
					}
				}
				if (fff)break;
			}

			if (fff == 0)
			{
				for (int t = 0;t<4;t++)
				{
					for (int k = 0;k<4;k++)
					{
						ans[xx[x] + t][yy[x] + k] = p[i][j].a[t][k];
					}
				}
				vis[i] = 1;

				dfs(x + 1);

				if (flag)
				{
					return;
				}
				vis[i] = 0;
				for (int t = 0;t<4;t++) 
				{
					if (x / 3 != 0 && t == 0)
					{
						continue;
					}
					for (int k = 0;k<4;k++) 
					{
						if (x % 3 != 0 && k == 0)
						{
							continue;
						}
						ans[xx[x] + t][yy[x] + k] = -1;
					}
				}
			}
		}
	}
}

void main() 
{
	memset(ans, -1, sizeof(ans));

	for (int i = 0;i<9;i++) 
	{
		for (int j = 0;j < 4;j++)
		{
			for (int k = 0;k < 4;k++)
			{
				scanf("%d", &p[i][0].a[j][k]);
			}
		}	
		for (int j = 0;j < 4;j++)
		{
			for (int k = 0;k < 4;k++)
			{
				p[i][1].a[j][k] = p[i][0].a[k][4 - j - 1];
			}
		}	
		for (int j = 0;j < 4;j++)
		{
			for (int k = 0;k < 4;k++)
			{
				p[i][2].a[j][k] = p[i][1].a[k][4 - j - 1];
			}
		}
		for (int j = 0;j < 4;j++)
		{
			for (int k = 0;k < 4;k++)
			{
				p[i][3].a[j][k] = p[i][2].a[k][4 - j - 1];
			}
		}		
	}
	dfs(0);
}