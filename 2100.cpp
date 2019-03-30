#include <iostream>
#include <string>
using namespace std;

void main()
{
	int i, n;
	int m = 2;
	string a[20];
	size_t str;
	cin >> n;
	cin.get();
	m += n;
	for (i = 0;i < n;i++)
	{
		getline(cin, a[i]);
	}
	for (i = 0;i < n;i++)
	{
		str = a[i].find('+', 0);
		if (str != a[i].npos)
		{
			m++;
		}
	}
	if (m == 13)
	{
		m++;
	}
	cout << m * 100;
}