#include <iostream>
using namespace std;

void main()
{
	int N;
	cin >> N;
	int p[101][101];
	p[0][N - 1] = 1;
	int m, n;
	int ct = 1, value = 2, iter = 1, row = 0, column = N - 2;
	while (ct <= N - 1)
	{
		n = column, m = row;
		for (int i = 0; i <= iter; i++)
		{
			p[m++][n++] = value;
			value++;
		}
		iter++;
		ct++;
		column--;
	}
	iter = N - 2;
	row = 1;
	column = 0;
	while (ct > 1)
	{
		n = column, m = row;
		for (int i = 0; i <= iter; i++)
		{
			p[m++][n++] = value;
			value++;
		}
		iter--;
		ct--;
		row++;
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << p[i][j] << " ";
		}
		cout << endl;
	}
}