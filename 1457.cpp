#include <iostream>
using namespace std;

void main()
{
	int N;
	double sum = 0.0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		int p;
		scanf("%d", &p);
		sum += (double)p;
	}
	sum /= double(N);
	printf("%.6lf", sum);
}