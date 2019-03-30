#include <iostream>
using namespace std;

void main()
{
	int n(0), m(0), last(0), temp_f(0), temp_s(0), end(0);
	cin >> n >> m;
	for (int i = 0;i<n;++i)
	{
		cin >> temp_f >> temp_s;
		last += temp_f - 2 - temp_s;
	}
	end = last + (m - 2);
	if (end < 0)
	{
		cout << "Big Bang!";
	}
	else
	{
		cout << end;
	}
}