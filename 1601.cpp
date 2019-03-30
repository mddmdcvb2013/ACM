#include <iostream>
#include <string>
using namespace std;

void main() 
{
	string s;
	int flag = 1;
	while (getline(cin, s)) 
	{
		int n = s.size();
		for (int i = 0; i<n; i++) 
		{
			if (flag) 
			{
				if (s[i] >= 'A' && s[i] <= 'Z') flag = 0;
			}
			else 
			{
				if (s[i] >= 'A' && s[i] <= 'Z') s[i] += ('a' - 'A');
				else if (s[i] == '.' || s[i] == '?' || s[i] == '!') flag = 1;
			}
		}
		cout << s << endl;
	}
}