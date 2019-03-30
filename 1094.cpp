#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
using namespace std;

char buf[81], p = 0;

void main()
{
	memset(buf, ' ', 80);
	while (true)
	{
		char c = getc(stdin);
		if (c == EOF)
		{
			break;
		}
		if (c == '\n')
		{
			continue;
		}
		if (c == '<')
		{
			p = std::max(0, p - 1);
		}
		else if (c == '>')
		{
			p = (p + 1) % 80;
		}
		else
		{
			buf[p] = c, p = (p + 1) % 80;
		}
	}
	printf("%s", buf);
}