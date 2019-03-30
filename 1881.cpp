#include <iostream>
#include <string>
using namespace std;

void main()
{
	int line, symbol, n;
	bool flag = false;
	cin >> line >> symbol >> n;
	int len[10001];
	string temp2;
	getchar();
	for (int i = 0;i < n;i++)
	{
		char temp[10001];
		cin.getline(temp, 10001);
		temp2 = (string)temp;
		len[i] = temp2.length();
	}
	int countPage = 1, countLine = 0, countSymbol = 0;
	for (int i = 0;i < n;i++)
	{
		if (countSymbol == 0)
		{
			countSymbol += len[i];
			countLine++;
		}
		else
		{
			countSymbol = countSymbol + len[i] + 1;
		}
		if (countSymbol > symbol)
		{
			countLine++;
			countSymbol = len[i];
		}
		if (countLine > line)
		{
			countPage++;
			countLine = 1;
			flag = false;
		}
	}
	cout << countPage << endl;
}