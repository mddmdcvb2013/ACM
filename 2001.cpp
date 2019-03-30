#include<iostream>
using namespace std;

int a[10];

void main()
{
	int j = 0;
	for (int i = 0;i<3;i++)
	{
		cin >> a[j++];
		cin >> a[j++];
	}
	cout << a[0] - a[4] << " " << a[1] - a[3] << endl;
}