#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

struct node
{
	char name[30];
	int ci;
	int mini;
} q[10];

bool cmp(struct node a, struct node b)
{
	if (a.ci != b.ci)
	{
		return a.ci > b.ci;
	}
	else if (a.ci == b.ci&&a.mini != b.mini)
	{
		return a.mini < b.mini;
	}
	else
	{
		return true;
	}
}

void main()
{
	int n = 6, i, j;
	int h = 0, c;
	char a[30], b[30];
	cin >> a >> b >> c;
	strcpy(q[h].name, b);
	q[h].mini = c;
	q[h++].ci = 1;
	for (i = 1; i<n; i++)
	{
		int f = 0;
		cin >> a >> b >> c;
		for (j = 0; j <= h; j++)
		{
			if (strcmp(q[j].name, b) == 0)
			{
				f = 1;
				q[j].ci++;
				if (q[j].mini > c)
				{
					q[j].mini = c;
				}
				break;
			}
		}
		if (f == 0)
		{
			strcpy(q[h].name, b);
			q[h].ci = 1;
			q[h++].mini = c;
		}
	}
	sort(q, q + h, cmp);
	cout << q[0].name << endl;
}