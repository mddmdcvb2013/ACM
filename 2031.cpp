#include <iostream>
using namespace std;

void main() 
{
	int n;
	while (scanf("%d", &n) != EOF) 
	{
		if (n == 1)
		{
			puts("01");
		}
		else if (n == 2)
		{
			puts("11 01");
		}
		else if (n == 3)
		{
			puts("06 68 88");
		}
		else if (n == 4)
		{
			puts("16 06 68 88");
		}
		else
		{
			puts("Glupenky Pierre");
		}
	}
}