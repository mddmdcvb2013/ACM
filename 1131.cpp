#include <iostream>
using namespace std;

void main()
{
	long long n, k;
	cin >> n >> k;
	int t = 0;
	long long val = 1;
	while (val < k && val < n)
	{
		t++;
		val <<= 1;
	}
	if (val >= n)
	{
		cout << t;
	}
	else
	{
		n -= val;
		t += (int)(n / k);
		if (n % k)
		{
			t++;
		}
		cout << t;
	}
}