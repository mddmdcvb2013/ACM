#include <iostream>
using namespace std;

void main()
{
	int ff;
	while (scanf("%d", &ff) != EOF)
	{
		if ((12 - ff) * 45 <= 240)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
}