#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
using namespace std;

void main()
{
	int b[5];
	int i;
	for (i = 0; i < 3; i++)
	{
		cin >> b[i];
	}
	sort(b, b + 3);
	int sum1 = b[0] - b[1] - b[2];
	int sum2 = b[0] - b[1] * b[2];
	cout << min(sum1, sum2) << endl;
}