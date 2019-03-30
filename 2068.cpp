#include <iostream>
using namespace std;

void main() 
{
	int n;
	cin >> n;
	int sum = 0;
	while (n--)
	{
		int a;
		cin >> a;
		sum += a / 2;
	}
	if (sum % 2 == 0)
	{
		cout << "Stannis\n";
	}
	else
	{
		cout << "Daenerys\n";
	}
}