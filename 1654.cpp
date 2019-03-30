#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>

using namespace std;
const int maxn = 200001;
char s[maxn];
char stk[maxn];
int main()
{
	int top = 0;
	memset(stk, 0, sizeof(stk));
	scanf("%s", s);
	stk[top++] = s[0];
	int len = strlen(s);
	for (int i = 1;i < len;i++)
	{
		if (stk[top - 1] == s[i])
		{
			top--;
		}
		else
		{
			stk[top++] = s[i];
		}
	}
	stk[top++] = 0;
	printf("%s\n", stk);
	return 0;
}