#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int prime[1000008] = { 0 };

int setprime(int a, int b)
{
	prime[2] = 1;
	int i, j;
	int z = 0;
	for (i = 2; i <= b; i++)
	{
		if (i % 2) prime[i] = 1;
	}
	for (i = 3; i <= sqrt(b); i++)
	{
		if (prime[i])
		{
			for (j = i + i; j <= b; j += i)
			{
				prime[j] = 0;
			}
		}
	}
	for (i = a; i <= b; i++)
	{
		if (prime[i])
		{
			z = i;
		}
	}
	return z;
}

void main()
{
	int a, b, temp, temp2, temp3;
	int count = 0;
	double total = 0.0f;
	double total2 = 0.0f;

	cin >> a >> b;
	if (a == 1)
	{
		cout << 1 << endl;
	}
	else
	{
		temp3 = setprime(a, b);
		if (temp3 != 0)
		{
			cout << temp3 << endl;
		}
		else
		{
			temp = a;
			temp2 = a;
			while (temp <= b)
			{
				for (int i = 2;temp >= i*i;i++)
				{
					if (temp%i == 0)
					{
						count += i;
						count += temp / i;
						if (i == temp%i)
						{
							count -= i;
						}
					}
				}
				count += 1;
				total = (double)count / (double)temp;
				if (total2 == 0)
				{
					total2 = total;
				}
				else
				{
					if (total < total2)
					{
						total2 = total;
						temp2 = temp;
					}
				}
				temp++;
				count = 0;
			}
			cout << temp2 << endl;
		}
	}
}