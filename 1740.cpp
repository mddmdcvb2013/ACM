#include <iostream>
using namespace std;

void main()
{
	int l, r, t;
	cin >> l >> r >> t;
	cout << t * (l / r) << ' ' << t * (l / r + !(l % r == 0)) << endl;
}