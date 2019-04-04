#include <iostream>
using namespace std;

void main() 
{
	int h, t, v, x;
	cin >> h >> t >> v >> x;
	double min, max;
	if (t*x >= h) 
	{
		min = 0;
		max = (h / (x*1.0));
	}
	else 
	{
		min = (h - x*t*1.0) / (v - x);
		max = t;
	}
	printf("%lf %lf\n", min, max);
}