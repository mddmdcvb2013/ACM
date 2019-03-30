#include <iostream>
#include <algorithm>
using namespace std;

const int maxn = 100010;
long long a[maxn];
long long b[maxn];

void main()
{
	cin >> a[0] >> a[1] >> a[2];
	long long min1 = min(abs(a[0] - a[1]), abs(a[0] - a[2]));
	long long min2 = min(abs(a[2] - a[1]), min1);
	int k = 3;
	a[k] = min2;
	while (min2)
	{
		for (int i = 0;i < k;i++)
		{
			min2 = min(abs(a[k] - a[i]), min2);
		}
		if (min2)
		{
			a[++k] = min2;
		}
	}
	cout << k - 1 << endl;
}