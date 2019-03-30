#include <iostream>
#include <algorithm>
using namespace std;

const int MAXN = 50000, MAX = 10000;
int a[MAXN], b[MAXN];
int n, k, m;

int main()
{
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	cin >> k;
	for (int i = 0; i < k; ++i)
	{
		cin >> b[i];
	}
	sort(a, a + n);
	sort(b, b + k);
	for (int i = 0; i < n; ++i)
	{
		const int cur = a[i];
		int l = 0;
		int r = k;
		while (r - l > 1)
		{
			m = (l + r) >> 1;
			if (cur + b[m] > MAX)
			{
				r = m;
			}
			else
			{
				l = m;
			}
		}
		if (cur + b[l] == MAX)
		{
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
	return 0;
}