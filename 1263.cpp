#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

void main()
{
	int Temp[10024] = { 0 };
	int m, n, k;
	double Per;
	cin >> m >> n;
	for (int i = 1;i <= n;i++)
	{
		cin >> k;
		Temp[k]++;
	}
	for (int i = 1;i <= m;i++)
	{
		Per = 100 * (double)Temp[i] / (double)n;
		cout << setiosflags(ios::fixed) << setprecision(2) << Per << "%" << endl;
	}
}