#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <sstream>
#include <math.h>
using namespace std;

/*
string Manacher(string s)
{
	string t = "$#";
	for (unsigned long long i = 0; i < s.size(); ++i) 
	{
		t += s[i];
		t += "#";
	}
	vector<unsigned long long> p(t.size(), 0);
	unsigned long long mx = 0, id = 0, resLen = 0, resCenter = 0;
	for (unsigned long long i = 1; i < t.size(); ++i)
	{
		p[i] = mx > i ? min(p[2 * id - i], mx - i) : 1;
		while (t[i + p[i]] == t[i - p[i]])
		{
			++p[i];
		}
		if (mx < i + p[i])
		{
			mx = i + p[i];
			id = i;
		}
		if (resLen < p[i])
		{
			resLen = p[i];
			resCenter = i;
		}
	}
	return s.substr((resCenter - resLen) / 2, resLen - 1);
}

unsigned long long power(unsigned long long a, unsigned long long b)
{
	long long val = 1;
	for (long long i = 0; i < b; i++)
	{
		val *= a;
	}
	return val;
}

unsigned long long get_length(unsigned long long a)
{
	unsigned long long length = 0;
	while (a)
	{
		a /= 10;
		length++;
	}
	return length;
}

unsigned long long get_value(unsigned long long a, unsigned long long i)
{
	unsigned long long value;
	value = a%power(10, i) / power(10, i - 1);
	return value;
}

unsigned long long bi2dec(unsigned long long a)
{
	unsigned long long val = 0;
	for (unsigned long long i = 1; i <= get_length(a); i++)
	{
		val += get_value(a, i)*power(2, i - 1);
	}
	return val;
}

unsigned long long decToBin(unsigned long long dec)
{
	unsigned long long result = 0, temp = dec, j = 1;
	while (temp) 
	{
		result = result + j*(temp % 2);
		temp = temp / 2;
		j = j * 10;
	}
	return result;
}
*/

void main()
{
	char InitData[1000002];
	cin.getline(InitData, 1000002);
	string T = string(InitData);
	int k = T.length();

	if (string(InitData) == "1") cout << 1 << endl;
	else if (string(InitData) == "10") cout << 2 << endl;
	else if (string(InitData) == "11" || string(InitData) == "100" || string(InitData) == "101" || string(InitData) == "110") cout << 5 << endl;
	else if (string(InitData) == "111" || string(InitData) == "1000" || string(InitData) == "1001" || string(InitData) == "1010") cout << 7 << endl;
	else if (string(InitData) == "1011" || string(InitData) == "1100" || string(InitData) == "1101" || string(InitData) == "1110") cout << 9 << endl;
	else if (string(InitData) == "1111" || string(InitData) == "10000" || string(InitData) == "10001" || string(InitData) == "10010") cout << 10 << endl;
	else if (string(InitData) == "10011" || string(InitData) == "10100" || string(InitData) == "10101" || string(InitData) == "10110") cout << 11 << endl;
	else
	{
		int p = k - 3;
		int q = k;
		for (k = k - 1; k >= p; k--)
		{
			if (InitData[k] == '1')
			{
				InitData[k] = '0';
			}
			else
			{
				InitData[k] = '1';
				for (int n = k - 1;n >= 0;n--)
				{
					if (InitData[n] == '0')
					{
						InitData[n] = '1';
					}
					else
					{
						InitData[n] = '0';
						break;
					}
				}
			}
		}
		if (InitData[0] == '1')
		{
			cout << 10 + 3 * (q - 4);
		}
		else
		{
			cout << 10 + 3 * (q - 5);
		}
	}
}