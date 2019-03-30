#include<iostream>
#include<string>
using namespace std;

void main()
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		long long n, k;
		scanf("%lld%lld", &n, &k);
		long long lessGroup = n / k;
		long long moreGroup = n % k;
		long long lessSum = lessGroup*(n - lessGroup)*(k - moreGroup);
		long long moreSum = (lessGroup + 1)*(n - lessGroup - 1)*moreGroup;
		printf("%lld\n", (lessSum + moreSum) / 2);
	}
}