#include <iostream>
using namespace std;

const int MAXN = 10005;
int n, q, sum[MAXN];

void main()
{
	cin >> n;
	sum[0] = 0;
	for (int i = 1; i <= n; i++)
	{
		cin >> sum[i];
		sum[i] += sum[i - 1];
	}

	cin >> q;
	while (q--)
	{
		int x, y;
		cin >> x >> y;
		cout << sum[y] - sum[x - 1] << endl;
	}
}