#include <iostream>
using namespace std;

void main()
{
	int n;
	cin >> n;

	if (n == 0 || n >= 3)
	{
		cout << -1 << endl;
	}
	else if (n == 1)
	{
		cout << "1 2 3" << endl;
	}
	else if (n == 2)
	{
		cout << "3 4 5" << endl;
	}
}