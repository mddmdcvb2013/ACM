#include <iostream>
using namespace std;

void main() 
{
	int a, b = 0, c = 0, d = 0;
	int ocenki[20];
	cin >> a;

	for (int i = 1; i <= a; i++)
	{
		cin >> ocenki[i];
	}
	for (int i = 1; i <= a; i++) 
	{
		if (ocenki[i] == 5)
		{
			b++;
		}
		else if (ocenki[i] == 4) 
		{
			c++;
		}
		else if (ocenki[i] == 3)
		{
			d++;
		}
	}
	if (d > 0)
	{
		cout << "None" << endl;
	}
	else if (b == a) 
	{
		cout << "Named" << endl;
	}
	else if (c > b) 
	{
		cout << "Common" << endl;
	}
	else if (c = b) 
	{
		cout << "High" << endl;
	}
}