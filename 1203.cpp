#include <iostream>
#include <algorithm>
using namespace std;

struct hui 
{
	int s, e;
}wuli[100010];

bool cmp(hui a, hui b) 
{
	return a.e<b.e;
}

int main()
{
	int n, t;

	scanf("%d", &n);
	int i;
	for (i = 0;i < n;i++) 
	{
		scanf("%d%d", &wuli[i].s, &wuli[i].e);
	}
	sort(wuli, wuli+n, cmp);

	int et = wuli[0].e;
	int counter = 1;
	for (i = 1; i<n; i++) 
	{
		if (wuli[i].s>et) 
		{
			counter++;
			et = wuli[i].e;
		}
	}
	printf("%d\n", counter);
}