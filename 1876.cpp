#include <iostream>
#include <algorithm>
using namespace std;

void main()
{
	int l, r;
	scanf("%d%d", &l, &r);

	int s1 = 39 + 2 * l;
	int s2 = 2 * r + 40;
	printf("%d", max(s1, s2));
}