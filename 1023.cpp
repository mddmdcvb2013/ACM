#include <iostream>
using namespace std;

void main()
{
	int l = 3, k;
	cin >> k;
	while (k%l != 0)
	{
		l++;
	}
	cout << l - 1 << endl;
}