#include <iostream>
using namespace std;

int main()
{
	for (int n = 1000000; ; )
	{
		for (int i = 0; i < 26; i++)
		{
			for (int j = 0; j < 26; j++)
			{
				for (int k = 0; k < 26; k++)
				{
					if (n-- > 0)
					{
						cout << (char)('a' + i);
					}
					if (n-- > 0)
					{
						cout << (char)('a' + j);
					}
					if (n-- > 0)
					{
						cout << (char)('a' + k);
					}
					else
					{
						return 0;
					}
				}
			}	
		}	
	}	
}