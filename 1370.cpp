#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void main()
{
	int A[1001];
	int N, M;
	cin >> N >> M;
	for (int i = 0;i < N;i++)
	{
		cin >> A[i];
	}
	int P;
	P = M%N;
	for (int i = 0;i < 10;i++)
	{
		if (i + P < N)
		{
			cout << A[i + P];
		}
		else
		{
			cout << A[i + P - N];
		}
	}
}