#include <iostream>
using namespace std;

const double PI = 3.1415926535;
double v, r, k;

void main()
{
	scanf("%lf%lf%lf", &v, &r, &k);
	double S = 0;
	r = r / 180 * PI;
	while (v > 0.01)
	{
		S += v*v / 10.0*sin(2 * r);
		v = v / sqrt(k);
	}
	printf("%.2lf\n", S);
}