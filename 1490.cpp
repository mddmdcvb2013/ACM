#include <iostream>
using namespace std;

void main()
{
	unsigned long long x, y = 0, z = 0, q, p, r;
	cin >> r;
	x = r;
	q = r*r;
	while (y<r)
	{
		p = q - y*y;
		while (x*x >= p && x >= 0)
		{
			--x;
		}
		z += (x + 1);
		y++;
	}
	z *= 4;
	cout << z;
}