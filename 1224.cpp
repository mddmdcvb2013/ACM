#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

void main()
{
	unsigned long long N,M;
	cin >> N >> M;
	cout << min(2 * (N - 1), 2 * (M - 1) + 1);
}