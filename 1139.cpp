#include <iostream>
#include <algorithm>
using namespace std;

long gcd(long a, long b) 
{
	while (a != b) 
	{
		if (a > b) 
		{
			swap(a, b);
		}
		b = b - a;
	}
	return a;
}

void main() 
{
	long mx, my, ans;
	cin >> mx >> my;
	mx--;
	my--;
	long MAX = max(mx, my);
	long MIN = min(mx, my);
	mx = MAX;
	my = MIN;

	long GCD = gcd(mx, my);

	if (GCD == my)
	{
		ans = mx;
	}
	else 
	{
		mx /= GCD;
		my /= GCD;
		ans = my - 1 + mx;
		ans *= GCD;
	}
	cout << ans;
}