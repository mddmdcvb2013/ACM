#include <iostream>
#include <string>
using namespace std;

char str[60];
int len, maxv = -1, maxi, num[30], i;

void main()
{
	scanf("%s", &str);

	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		int index = str[i] - 'a';
		num[index] ++;
		if (num[index] > maxv)
		{
			maxv = num[index];
			maxi = index;
		}
	}

	printf("%c\n", maxi + 'a');
}