#include <iostream>
using namespace std;

void main()
{
	char s[255255], ch[255255];
	int poz = -1;
	int index = -1;
	int count = 0;
	while (scanf("%c", &ch[++index]) != EOF);
	while (count <= index)
	{
		if (isalpha(ch[count]))
		{
			poz++;
			s[poz] = ch[count];
		}
		else
		{
			if (poz != -1)
			{
				while (poz >= 0)
				{
					printf("%c", s[poz]);
					poz--;
				}
			}
			if (count != index)
			{
				printf("%c", ch[count]);
			}
		}
		count++;
	}
}