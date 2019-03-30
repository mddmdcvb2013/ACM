#include <iostream>
using namespace std;

void main() 
{
	long long ans = 0; int in;
	cin >> in;
	for (int i = 0; i <= in; i++) 
	{
		for (int j = i; j <= in; j++) 
		{
			ans += i + j;
		}
	}
	cout << ans;
}