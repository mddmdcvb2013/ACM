#include <iostream>
using namespace std;

void main()
{ 
	int x, y;
	cin >> x >> y;
	if (x > 0 && y > 0 && (x + y) % 2)
	{
		swap(x, y);
	}
	cout << x << " " << y; 
}