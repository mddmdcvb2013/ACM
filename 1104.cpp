#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int maxKNum(string s, int &k)
{
	int sum = 0, a = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] >= 'A') a = s[i] - 'A' + 10;
		else a = s[i] - '0';
		k = max(k, a);
		sum += a;
	}
	return sum;
}

void main()
{
	string s;
	cin >> s;
	bool flag = false;
	int k = 0;
	int sum = maxKNum(s, k);
	if (0 == k) k++;
	for (; k < 36; k++)
	{
		if (sum % (k) == 0)
		{
			cout << k + 1;
			flag = true;
			break;
		}
	}
	if (flag==false)
	{
		cout << "No solution.";
	}
}