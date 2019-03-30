#include <iostream>
using namespace std;

void main()
{
	int s = 0;
	char t;
	while (cin >> t)
	{
		s += t - '0';
	}
	s % 3 == 0 ? cout << 2 : cout << 1 << '\n' << s % 3;
}