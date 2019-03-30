#include <iostream>
#include <set>
using namespace std;

int b[6] = { 10, 50, 100, 500, 1000, 5000 };
set<int> ans;

void main()
{
	int a[6], k, sum = 0;
	int t = 0;
	for (int i = 0; i<6; i++)
	{
		scanf("%d", &a[i]);
		sum += a[i] * b[i];
		if (!t && a[i])
		{
			t = b[i];
		}
	}
	scanf("%d", &k);
	for (int i = sum - t + 1; i <= sum; i++)
	{
		if (i % k == 0)
		{
			ans.insert(i / k);
		}
	}
	int n = ans.size();
	printf("%d\n", n);
	for (set<int>::iterator it = ans.begin(); it != ans.end(); it++)
	{
		printf("%s%d", it != ans.begin() ? " " : "", *it);
	}
}