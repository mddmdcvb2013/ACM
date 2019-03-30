#include <iostream>
#include <algorithm>
using namespace std;

unsigned long long arr[100005];

void main()
{
	for (int i = 1;i <= 90000;i++)
	{
		arr[i - 1] = (1 + i * 0.5 * (i - 1));
	}
	int testcase;
	cin >> testcase;
	while (testcase--)
	{
		int n;
		scanf("%d", &n);
		printf("%d ", binary_search(arr, arr + 100000, n));
	}
}