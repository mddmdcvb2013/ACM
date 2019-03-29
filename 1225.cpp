#include<iostream>
#include<string>
using namespace std;

long int Counting(long int m)
{
	long int k = 0;
	if (m == 1 || m == 2)
	{
		k = 1;
	}
	else
	{
		k = Counting(m - 1) + Counting(m - 2);
	}
	return k;
}
void main()
{
	/*long int n,c;
	cin >> n;
	if (n >= 1 && n <= 45)
	{
	c = 2 * Counting(n);
	cout << c << endl;
	}*/

	long long int n, m, count;
	long long int temp = 0;
	unsigned long long int temp1 = 1;
	unsigned long long int temp2 = 1;
	long long int p;
	long long int t;
	long long int y;
	cin >> n;
	if (n >= 1 && n <= 45)
	{
		if (n <= 2)
		{
			cout << "2" << endl;
		}
		else
		{
			m = n - 2;
			p = m;
			for (int i = 1;i <= p;i++)
			{
				if ((p - i) >= i)
				{
					for (int j = 1;j <= i;j++)
					{
						temp1 *= j;
					}
					for (int k = p;k >= (p + 1 - i);k--)
					{
						temp2 *= k;
					}
					temp = temp + (temp2 / temp1);
					temp1 = 1;
					temp2 = 1;
					p--;
				}
				else
				{
					t = p - i;
					if (t == 0)
					{
						temp += 1;
						temp1 = 1;
						temp2 = 1;
						p--;
					}
					else
					{
						for (int j = 1;j <= t;j++)
						{
							temp1 *= j;
						}
						for (int k = p;k >= (p + 1 - t);k--)
						{
							temp2 *= k;
						}
						temp = temp + (temp2 / temp1);
						temp1 = 1;
						temp2 = 1;
						p--;
					}
				}
			}
			y = (temp * 2) + 2;
			cout << y << endl;
		}
	}
}

//#include <iostream>
//#include <stdio.h>
//using namespace std;
//
//int main() {
//	int N;
//	int i;
//	long long flag[50];
//	flag[1] = 2;
//	flag[2] = 2;
//	cin >> N;
//
//	for (i = 3;i <= N;i++)
//		flag[i] = flag[i - 1] + flag[i - 2];
//	cout << flag[N] << endl;
//}