#include <iostream>
#include <math.h>
using namespace std;

void main()
{
	int n, t, s, i, se[103];
	double temp;
	scanf("%d %d %d", &n, &t, &s);
	for (i = 0;i < n;i++)
	{
		scanf("%d", &se[i]);
	}
	for (i = 0;i<n;i++)
	{
		temp = (s + t + se[i])*1.0 / 2;
		printf("%.6lf\n", temp);
	}
}