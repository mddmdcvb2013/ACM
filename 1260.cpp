#include <iostream>
using namespace std;
void main()
{
	int n;
	int i ;
	int A[55] = { 0 };
	A[1] = 1;
	A[2] = 1;
	A[3] = 2;
	cin >> n;
	if (n <= 3)
	{
		cout << A[i] << endl;
	}
	else
	{
		for (i = 4;i <= n;i++)
		{
			A[i] = A[i - 1] + A[i - 3] + 1;
		}
		cout << A[n] << endl;
	}
}

/*
This problem solved with the left edge.

We look for position of "2".

We have three cases:
1) 12***** - "2" in the second position
2) 1*2**** - "2" in the third position

    1**2*** - "2" in the fourth position is impossible
    1***2** - "2" in the fifth position is impossible

3) 1*****2 - "2" in the last position is possible (the one special case).
For example: 1357642

For each case find sub-task:
1) a[i-1]
2) is NOT a[i-2]
For 1*2**** there can only be one 132****, more accurate 1324***.
Therefore is a[i-3].
3) is 1

Recurrent expression: a[i] = a[i-1] + a[i-3] + 1.
And a precalculation:
a[1] = 1
a[2] = 1
a[3] = 2

A some answers to compare:
a[4] = 4
a[5] = 6
a[6] = 9
a[7] = 14
*/