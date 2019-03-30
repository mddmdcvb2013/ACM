#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int>v;

void main() 
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) 
	{
		int x; scanf("%d", &x);
		v.push_back(x);
	}
	sort(v.begin(),v.end());
	printf("%d\n", v[n / 2]);
}