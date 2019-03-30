#include <stdio.h>
#include <stdlib.h>

int nbit;
int ans[10000] = { 0 };
int ans2[10000] = { 0 };
int totallen = 0;;

void init()
{
	nbit = 1;
	ans[0] = 1;
}

void mul1(int num)
{
	int temp_add = 0;
	int temp_mul = 0;
	for (int i = 0; i < nbit; i++)
	{
		temp_mul = num * ans[i];
		ans[i] = (temp_mul + temp_add) % 10;
		temp_add = (temp_mul + temp_add) / 10;
	}
	while (temp_add)
	{
		ans[nbit++] = temp_add % 10;
		temp_add /= 10;
	}
}

void exp1(int b, int e)
{
	for (int i = 0; i < e; i++)
	{
		mul1(b);
	}
}

void mul(int num1[], int num2)
{
	int len1, len2, i, j;
	int temp[2] = { 6,3 };
	len1 = nbit;
	len2 = 2;
	for (i = 0; i < len2; i++)
	{
		for (j = 0; j < len1; j++)
		{
			ans2[i + j] += temp[i] * ans[j];
		}
	}

	for (i = 0; i < 10000; i++)
	{
		if (ans2[i] >= 10)
		{
			ans2[i + 1] += ans2[i] / 10;
			ans2[i] %= 10;
		}
	}

	for (i = 10000; ans2[i] == 0 && i >= 0; i--);
	totallen = i + 1;
}

void main()
{
	int n, m, k, length;
	scanf("%d", &n);
	m = (8 * 9) / 2;
	k = (10 * 11) / 2;
	init();
	exp1(k, n - 1);
	mul(ans, m);
	length = totallen;
	for (int i = length - 1;i >= 0;i--)
	{
		printf("%d", ans2[i]);
	}
}