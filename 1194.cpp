#include <iostream>
using namespace std;

void main() 
{
	int n, k;
	scanf("%d%d", &n, &k);
	printf("%d\n", (n * (n - 1)) / 2 - k);
}