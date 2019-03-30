#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

void main()
{
	int n, arr[200], count = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr + n);
	for (int i = 0; i <= n / 2; i++)
	{
		count += arr[i] / 2 + 1;
	}
	cout << count << endl;
}