#include <iostream>
#include <algorithm>
using namespace std;

void main()
{
	int i, K, N;
	int a[16];
	cin >> N;
	cin >> K;
	a[0] = K - 1;
	a[1] = K * (K - 1);
	if (N > 2)
	{
		for (i = 2;i < N;i++)
		{
			a[i] = (K - 1)*(a[i - 1] + a[i - 2]);
		}
	}
	cout << a[N - 1];
}