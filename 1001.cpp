#include <iostream>
#include <math.h>
using namespace std;

double stack[131073];

void main()
{
	int index = -1;
	while (scanf("%lf", &stack[++index]) != EOF);
	for (; index > 0;printf("%.4lf\n", sqrt(stack[--index])));
}